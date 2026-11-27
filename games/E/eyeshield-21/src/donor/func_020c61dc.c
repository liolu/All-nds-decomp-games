/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* RTC_ConvertDateTimeToSecond from https://github.com/Project-Holon/aletheia src/game/arm9/convert.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef signed long long s64;
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
extern s32 func_020c6270(RTCDate *date);
extern s32 func_020c6254(RTCTime *time);
extern s64 func_020c61dc(RTCDate *date, RTCTime *time);
s32 func_020c6270(RTCDate *date);
s32 func_020c6254(RTCTime *time);
s64 func_020c61dc(RTCDate *date, RTCTime *time) {
    s32 day;
    s32 sec;

    day = func_020c6270(date);
    if (day == -1) {
        return -1;
    }
    sec = func_020c6254(time);
    if (sec == -1) {
        return -1;
    }
    return (s64) day * 86400 + sec;
}
