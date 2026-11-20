/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
extern OSTick func_020b65b0(void);
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
extern void func_020b68b8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void func_020b6f24(void);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020b6bd0(void);
extern OSIntrMode func_020b6be4(OSIntrMode state);
extern void func_020b678c(OSAlarm *alarm, OSTick fire);

/* Os_Alarm_Set from https://github.com/RonyxDumb/mkds src/arm9/0200f950_Os_Alarm_Set.c (license: none), reused by
 * tools/donor_match.py */
void func_020b68b8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg) {
    if (!alarm || alarm->handler) {
        func_020b6f24();
    }

    OSIntrMode enabled = func_020b6bd0();

    alarm->period = 0;

    alarm->handler = handler;
    alarm->arg     = arg;

    func_020b678c(alarm, func_020b65b0() + tick);

    (void) func_020b6be4(enabled);
}
