/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_CancelVAlarm from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_02024624(void);
extern OSIntrMode func_02024638(OSIntrMode state);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_02024334(OSVAlarm *alarm);
void func_02024480(OSVAlarm *alarm);
void func_02024334(OSVAlarm *alarm) {
    OSIntrMode enabled = func_02024624();
    ;

    ((void) 0);
    ((void) 0);

    alarm->canceled = 1;
    if (alarm->handler == 0) {
        (void) func_02024638(enabled);
        return;
    }

    func_02024480(alarm);

    alarm->handler = 0;

    (void) func_02024638(enabled);
}
