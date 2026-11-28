/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_DetachVAlarm from https://github.com/RonyxDumb/mkds verification/leafs/arm7_037fa96c.c (license: none), reused by
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
void func_02024480(OSVAlarm *alarm) {
    OSVAlarm *prev;
    OSVAlarm *next;

    if (!alarm) {
        return;
    }

    prev = alarm->prev;
    next = alarm->next;

    if (next) {
        next->prev = prev;
    } else {
        data_020ec6bc.tail = prev;
    }

    if (prev) {
        prev->next = next;
    } else {
        data_020ec6bc.head = next;
    }
}
