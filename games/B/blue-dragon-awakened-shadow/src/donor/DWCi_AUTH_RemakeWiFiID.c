/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_AUTH_RemakeWiFiID from https://github.com/ntrtwl/NitroDWC libraries/bm/src/util_wifiidtool.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef int BOOL;
typedef u64 OSTick;
extern BOOL OS_IsTickAvailable(void);
extern OSTick OS_GetTick(void);
extern void OS_GetMacAddress(u8 *macAddress);
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef enum RTCResult {
    RTC_RESULT_SUCCESS = 0,
    RTC_RESULT_BUSY,
    RTC_RESULT_ILLEGAL_PARAMETER,
    RTC_RESULT_SEND_ERROR,
    RTC_RESULT_INVALID_COMMAND,
    RTC_RESULT_ILLEGAL_STATUS,
    RTC_RESULT_FATAL_ERROR,
    RTC_RESULT_MAX
} RTCResult;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void RTC_Init(void);
extern RTCResult RTC_GetDate(RTCDate *date);
extern RTCResult RTC_GetTime(RTCTime *time);
extern s64 RTC_ConvertDateTimeToSecond(const RTCDate *date, const RTCTime *time);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    u32 x;
    u32 mul;
    u32 add;
} MATHRandContext16;
static inline void MATH_InitRand16(MATHRandContext16 *context, u32 seed) {
    context->x   = seed;
    context->mul = 1566083941LL;
    context->add = 2531011;
}
static inline u16 MATH_Rand16(MATHRandContext16 *context, u16 max) {
    context->x = context->mul * context->x + context->add;

    if (max == 0) {
        return (u16) (context->x >> 16);
    } else {
        return (u16) (((context->x >> 16) * max) >> 16);
    }
}
typedef struct DWCWiFiInfo {
    u64 attestedUserId;
    u64 notAttestedId;
    u16 pass;
    u16 randomHistory;
} DWCWiFiInfo;
extern void DWCi_BM_GetWiFiInfo(DWCWiFiInfo *buf);
u64 DWCi_Util_WiFiId_scrambleUid(u16 rand, u32 mac, u8 vend, u8 mainunit);
BOOL DWCi_AUTH_RemakeWiFiID(DWCWiFiInfo *wifiinfo) {
    u8 macaddr[6] = {0};
    RTCDate date;
    RTCTime time;
    MATHRandContext16 rand;

    DWCi_BM_GetWiFiInfo(wifiinfo);

    RTC_Init();
    if (RTC_GetDate(&date) != RTC_RESULT_SUCCESS) {
        return 0;
    }
    if (RTC_GetTime(&time) != RTC_RESULT_SUCCESS) {
        return 0;
    }

    s64 seed = RTC_ConvertDateTimeToSecond(&date, &time);

    if (seed < 0) {
        return 0;
    }

    if (OS_IsTickAvailable()) {
        seed += OS_GetTick;
    }

    MATH_InitRand16(&rand, seed);
    OS_GetMacAddress(macaddr);

    u32 macUP3 = (macaddr[0] << 16) | (macaddr[1] << 8) | macaddr[2];
    u8 vend    = macUP3 != 0x9BF;
    u32 macDW3 = (macaddr[3] << 16) | (macaddr[4] << 8) | macaddr[5];

    wifiinfo->pass = MATH_Rand16(&rand, 1000);

    wifiinfo->notAttestedId = 0;
    while (wifiinfo->notAttestedId == 0) {
        MATH_Rand16(&rand, 0);
        while (rand.x == 0 || wifiinfo->randomHistory == (u16) rand.x) {
            MATH_Rand16(&rand, 0);
        }

        wifiinfo->randomHistory = rand.x;
        wifiinfo->notAttestedId = DWCi_Util_WiFiId_scrambleUid(wifiinfo->randomHistory, macDW3, vend, 0);
    }

    return 1;
}
