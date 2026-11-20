/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_EndAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_EndAlarm.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef int OSIntrMode;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern OSIntrMode func_02006be0(void);
extern OSIntrMode func_02006bf4(OSIntrMode state);
extern u16 data_02147c48;
extern void func_02006440(int timerNum);
void func_0200673c(void) {
    OSIntrMode enabled;

    enabled = func_02006be0();

    if (data_02147c48) {

        func_02006440(OS_TIMER_1);

        data_02147c48 = 0;
    }

    (void) func_02006bf4(enabled);
}
