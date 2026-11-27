/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InsertAlarm from projets/blue-dragon-awakened-shadow/src/auto/OSi_InsertAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef long long s64;
typedef u64 OSTick;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSAlarm OSAlarm;
struct OSAlarm {
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
extern OSTick func_020d34b0(void);
extern struct {
    u16 useAlarm;
    u16 pad;
    struct OSiAlarmQueue queue;
} data_021e1a04;
extern void func_020d35d0(OSAlarm *alarm);
extern void func_020d36bc(OSAlarm *alarm, OSTick fire);
void func_020d36bc(OSAlarm *alarm, OSTick fire) {
    OSAlarm *prev;
    OSAlarm *next;

    if (alarm->period > 0) {
        OSTick tick = func_020d34b0();

        fire = alarm->start;
        if (alarm->start < tick) {
            fire += alarm->period * ((tick - alarm->start) / alarm->period + 1);
        }
    }

    alarm->fire = fire;

    for (next = data_021e1a04.queue.head; next; next = next->next) {

        if ((s64) (fire - next->fire) >= 0) {
            continue;
        }

        alarm->prev = next->prev;
        next->prev  = alarm;
        alarm->next = next;
        prev        = alarm->prev;

        if (prev) {
            prev->next = alarm;
        } else {
            data_021e1a04.queue.head = alarm;
            func_020d35d0(alarm);
        }

        return;
    }

    alarm->next              = 0;
    prev                     = data_021e1a04.queue.tail;
    data_021e1a04.queue.tail = alarm;
    alarm->prev              = prev;

    if (prev) {
        prev->next = alarm;
    } else {
        data_021e1a04.queue.head = data_021e1a04.queue.tail = alarm;
        func_020d35d0(alarm);
    }
}
