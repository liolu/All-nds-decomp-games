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
extern OSIntrMode func_020b6bd0(void);
extern OSIntrMode func_020b6be4(OSIntrMode state);
extern u16 data_020f1cb8;
extern void func_020b64a0(int timerNum);
void func_020b672c(void) {
    OSIntrMode enabled;

    enabled = func_020b6bd0();

    if (data_020f1cb8) {

        func_020b64a0(OS_TIMER_1);

        data_020f1cb8 = 0;
    }

    (void) func_020b6be4(enabled);
}
