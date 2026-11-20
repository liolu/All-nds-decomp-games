/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200aec8 from projets/code-lyoko/src/auto/func_0200aec8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long s32;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
extern void func_0201e184(s32 timerNum);
typedef u64 OSTick;
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
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void func_0201e2d4(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_0201c1fc(OSIrqMask mask);
extern u16 data_0203e08c;
extern struct OSiAlarmQueue data_0203e090;
void func_0201e2d4(void) {
    if (!data_0203e08c) {
        data_0203e08c = 1;

        func_0201e184(OS_TIMER_1);

        data_0203e090.head = ((void *) 0);
        data_0203e090.tail = ((void *) 0);

        (void) func_0201c1fc((1UL << 4));
    }
}
