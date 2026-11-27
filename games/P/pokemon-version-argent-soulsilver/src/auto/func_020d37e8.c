/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
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
extern void func_020d37e8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void func_020d3f48(void);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
extern void func_020d36bc(OSAlarm *alarm, OSTick fire);

/* Os_Alarm_Set from https://github.com/RonyxDumb/mkds src/arm9/0200f950_Os_Alarm_Set.c (license: none), reused by
 * tools/donor_match.py */
void func_020d37e8(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg) {
    if (!alarm || alarm->handler) {
        func_020d3f48();
    }

    OSIntrMode enabled = _Z20DisableIRQInterruptsv();

    alarm->period = 0;

    alarm->handler = handler;
    alarm->arg     = arg;

    func_020d36bc(alarm, func_020d34b0() + tick);

    (void) _Z20SetIRQInterruptStatei(enabled);
}
