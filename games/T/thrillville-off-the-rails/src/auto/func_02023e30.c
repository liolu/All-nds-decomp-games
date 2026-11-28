/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
extern OSTick func_02023a9c(void);
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
extern void func_02023e30(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void func_020248dc(void);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
extern void func_02023ea8(OSAlarm *alarm, OSTick fire);

/* Os_Alarm_Set from https://github.com/RonyxDumb/mkds src/arm9/0200f950_Os_Alarm_Set.c (license: none), reused by
 * tools/donor_match.py */
void func_02023e30(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg) {
    if (!alarm || alarm->handler) {
        func_020248dc();
    }

    OSIntrMode enabled = func_02024624();

    alarm->period = 0;

    alarm->handler = handler;
    alarm->arg     = arg;

    func_02023ea8(alarm, func_02023a9c() + tick);

    (void) func_02024638(enabled);
}
