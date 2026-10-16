/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b6924 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b6924.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long s64;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 pad_08[5];
    s64 period;
    s64 fire;
} OSAlarm;
extern u32 func_020b6bd0(void);
extern void func_020b6be4(u32);
extern void func_020b6f24(void);
extern void func_020b678c(OSAlarm *alarm, OSTick fire);
void func_020b6924(OSAlarm *alarm, s64 fire, s64 period, OSAlarmHandler handler, void *arg) {
    u32 irq;

    if (alarm == 0 || alarm->handler != 0) {
        func_020b6f24();
    }

    irq            = func_020b6bd0();
    alarm->period  = period;
    alarm->fire    = fire;
    alarm->handler = handler;
    alarm->arg     = arg;
    func_020b678c(alarm, 0);
    func_020b6be4(irq);
}
