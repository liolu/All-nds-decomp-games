/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* RTCi_ConvertSecondToTime from https://github.com/RonyxDumb/mkds src/arm9/0214e274_Rtc_Date_GetDays.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_0200e7c0(RTCTime *time, s32 sec);
void func_0200e7c0(RTCTime *time, s32 sec) {
    if (sec < 0) {
        sec = 0;
    }
    if (sec > 86399) {
        sec = 86399;
    }
    time->second = (u32) (sec % 60);
    sec /= 60;
    time->minute = (u32) (sec % 60);
    sec /= 60;
    time->hour = (u32) sec;
}
