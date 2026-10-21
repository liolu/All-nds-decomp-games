/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_AUTH_GetNewWiFiInfo from projets/blue-dragon-awakened-shadow/src/donor/DWCi_AUTH_GetNewWiFiInfo.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef int BOOL;
typedef u64 OSTick;
extern BOOL func_020064d8(void);
extern OSTick func_02006550(void);
extern void func_02006d00(u8 *macAddress);
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
extern void func_0200dcec(void);
extern RTCResult func_0200ddc8(RTCDate *date);
extern RTCResult func_0200de74(RTCTime *time);
extern s64 func_0200e65c(const RTCDate *date, const RTCTime *time);
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
extern void func_020917c4(DWCWiFiInfo *buf);
extern BOOL func_020929ac(DWCWiFiInfo *wifiinfo);
extern u64 func_02092828(u16 rand, u32 mac, u8 vend, u8 mainunit);
BOOL func_020929ac(DWCWiFiInfo *wifiinfo) {
    u8 macaddr[6];
    RTCDate date;
    RTCTime time;
    MATHRandContext16 rand;

    func_020917c4(wifiinfo);

    func_0200dcec();
    if (func_0200ddc8(&date) != RTC_RESULT_SUCCESS) {
        return 0;
    }
    if (func_0200de74(&time) != RTC_RESULT_SUCCESS) {
        return 0;
    }

    s64 seed = func_0200e65c(&date, &time);

    if (seed < 0) {
        return 0;
    }

    if (func_020064d8()) {
        seed += func_02006550;
    }

    MATH_InitRand16(&rand, seed);
    func_02006d00(macaddr);

    u32 macUP3 = (macaddr[0] << 16) | (macaddr[1] << 8) | macaddr[2];
    u8 vend    = macUP3 != 0x9BF;
    u32 macDW3 = (macaddr[3] << 16) | (macaddr[4] << 8) | macaddr[5];

    wifiinfo->pass           = MATH_Rand16(&rand, 1000);
    wifiinfo->attestedUserId = 0;

    if (wifiinfo->randomHistory == 0) {
        wifiinfo->notAttestedId = 0;
        while (wifiinfo->notAttestedId == 0) {
            MATH_Rand16(&rand, 0);
            while (rand.x == 0) {
                MATH_Rand16(&rand, 0);
            }

            wifiinfo->randomHistory = rand.x;
            wifiinfo->notAttestedId = func_02092828(wifiinfo->randomHistory, macDW3, vend, 0);
        }
    } else {
        wifiinfo->notAttestedId = 0;
        while (wifiinfo->notAttestedId == 0) {
            wifiinfo->randomHistory++;
            wifiinfo->notAttestedId = func_02092828(wifiinfo->randomHistory, macDW3, vend, 0);
        }
    }

    return 1;
}
