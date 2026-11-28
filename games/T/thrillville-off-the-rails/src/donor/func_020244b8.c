/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_AppendVAlarm from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
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
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_020ec6bc;
extern void func_02024390(OSVAlarm *alarm);
extern void func_020244b8(OSVAlarm *alarm);
void func_020244b8(OSVAlarm *alarm) {
    OSVAlarm *prev = data_020ec6bc.tail;

    alarm->prev = prev;
    alarm->next = 0;

    data_020ec6bc.tail = alarm;

    if (prev) {
        prev->next = alarm;
    } else {
        data_020ec6bc.head = alarm;
        func_02024390(alarm);
    }
}
void func_02024390(OSVAlarm *alarm);
