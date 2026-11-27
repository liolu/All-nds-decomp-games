#include "m2c.h"

typedef struct Alarm {
    void (*handler)(u32);
    u32 arg;
    u32 pad8;
    u64 fire;
    struct Alarm *prev;
    struct Alarm *next;
    u64 period;
} Alarm;

typedef struct {
    u32 w0;
    Alarm *head;
    Alarm *tail;
} AlarmList;

extern u32 data_027e0000;
extern AlarmList data_021e1a04;
extern u32 func_020d1204(u32);
extern u64 func_020d34b0(void);
extern void func_020d35d0(Alarm *);
extern void func_020d36bc(Alarm *, u32, u32);

void func_020d38ec(void) {
    Alarm *a;
    u64 now;
    void (*h)(u32);
    u8 *d;
    Alarm *nx;

    *(volatile u16 *) 0x04000106 = 0;
    func_020d1204(0x10);
    d = (u8 *) &data_027e0000;
    *(u32 *) (d + 0x3ff8) |= 0x10;
    now = func_020d34b0();
    a   = data_021e1a04.head;
    if (a == NULL) {
        return;
    }
    if (now < a->fire) {
        func_020d35d0(a);
        return;
    }
    nx                 = a->next;
    data_021e1a04.head = nx;
    if (nx == NULL) {
        data_021e1a04.tail = NULL;
    } else {
        nx->prev = NULL;
    }
    h = a->handler;
    if (a->period == 0) {
        a->handler = NULL;
    }
    if (h != NULL) {
        h(a->arg);
    }
    if (a->period != 0) {
        a->handler = h;
        func_020d36bc(a, 0, 0);
    }
    if (data_021e1a04.head != NULL) {
        func_020d35d0(data_021e1a04.head);
    }
    return;
}
