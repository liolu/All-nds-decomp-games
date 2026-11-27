/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_ParseServerDate from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/auth_netcheck.c (license: none),
 * reused by tools/donor_match.py */
extern char *strcpy(char *dest, const char *src);
extern unsigned strlen(const char *str);
extern int strcmp(const char *a, const char *b);
typedef unsigned long u32;
typedef signed long long int s64;
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
extern s64 RTC_ConvertDateTimeToSecond(const RTCDate *date, const RTCTime *time);
extern int func_0204c4a4(char *date);
extern int errno;
extern char *data_020f9900[12];
extern char data_020f9930[];
extern char data_0210e6f4[];
extern long atoi(const char *);
extern RTCResult func_02010370(RTCDate *, RTCTime *);
int func_0204c4a4(char *s) {
    RTCDate date;
    RTCTime time;
    char buf[32];
    s64 now, then;
    int i;
    int n = strlen(s);
    if (n != (int) strlen(data_020f9930) || s[7] != 32 || s[11] != 32 || s[16] != 32 || s[19] != 58 || s[22] != 58 ||
        s[25] != 32) {
        goto fail;
    }
    if (func_02010370(&date, &time) != 0) {
        goto fail;
    }
    now = RTC_ConvertDateTimeToSecond(&date, &time);
    if (now == -1) {
        goto fail;
    }
    strcpy(buf, s);
    buf[7]    = 0;
    buf[11]   = 0;
    buf[16]   = 0;
    buf[19]   = 0;
    buf[22]   = 0;
    buf[25]   = 0;
    errno     = 0;
    date.year = atoi(buf + 12);
    if (errno == 34) {
        goto fail;
    }
    date.year -= 2000;
    date.month = 13;
    for (i = 0; i < 12; i++) {
        if (!strcmp(data_020f9900[i], buf + 8)) {
            date.month = i + 1;
            break;
        }
    }
    if (date.month > 12) {
        goto fail;
    }
    errno    = 0;
    date.day = atoi(buf + 5);
    if (errno == 34) {
        goto fail;
    }
    errno     = 0;
    time.hour = atoi(buf + 17);
    if (errno == 34) {
        goto fail;
    }
    errno       = 0;
    time.minute = atoi(buf + 20);
    if (errno == 34) {
        goto fail;
    }
    errno       = 0;
    time.second = atoi(buf + 23);
    if (errno == 34) {
        goto fail;
    }
    then = RTC_ConvertDateTimeToSecond(&date, &time);
    if (then == -1) {
        goto fail;
    }
    *(s64 *) (data_0210e6f4 + 12) = now - then;
    *(s64 *) (data_0210e6f4 + 4)  = now;
    *(int *) data_0210e6f4        = 1;
    return 1;
fail:
    return 0;
}
