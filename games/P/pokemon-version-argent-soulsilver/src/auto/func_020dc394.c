/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* RTC_ConvertDayToDate from https://github.com/RonyxDumb/mkds src/arm9/0214e274_Rtc_Date_GetDays.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
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
extern void func_020dc394(RTCDate *date, s32 day);
extern s32 data_02110fa8[12];
static inline BOOL RTCi_IsLeapYear(u32 year) {
    return !((year & 0x03));
}
void func_020dc394(RTCDate *date, s32 day) {
    u32 year;
    s32 month;

    if (day < 0) {
        day = 0;
    }
    if (day > 36524) {
        day = 36524;
    }
    date->week = (RTCWeek) ((day + 6) % 7);
    for (year = 0; year < 99; year++) {
        s32 prev = day;
        day -= (RTCi_IsLeapYear(year)) ? 366 : 365;
        if (day < 0) {
            day = prev;
            break;
        }
    }
    if (day > 365) {
        day = 365;
    }
    date->year = year;
    if (RTCi_IsLeapYear(year)) {
        if (day < 31 + 29) {
            if (day < 31) {
                month = 1;
            } else {
                month = 2;
                day -= 31;
            }
            date->month = (u32) month;
            date->day   = (u32) (day + 1);
            return;
        } else {
            day--;
        }
    }
    for (month = 11; month >= 0; month--) {
        if (day >= data_02110fa8[month]) {
            date->month = (u32) (month + 1);
            date->day   = (u32) (day - data_02110fa8[month] + 1);
            return;
        }
    }
}
