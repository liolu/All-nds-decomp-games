#include "m2c.h"

typedef struct Thr {
    u8 p0[0x68];
    struct Thr *next;
    u8 p1[4];
    s32 prio;
} Thr;

typedef struct Sys {
    u8 p0[0x28];
    Thr *cur;
    Thr *head;
} Sys;

extern Sys data_021e169c;
void func_020d18b0(void);
s32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(s32 irq);

void func_020d1fa0(void) {
    Thr *before = NULL;
    Thr *last   = NULL;
    s32 count   = 0;
    s32 irq;
    Thr *cur;
    Thr *prev;
    Thr *it;

    cur  = data_021e169c.cur;
    irq  = _Z20DisableIRQInterruptsv();
    it   = data_021e169c.head;
    prev = NULL;
    if (it != NULL) {
        s32 prio = cur->prio;
        do {
            if (it == cur) {
                before = prev;
            }
            if (prio == it->prio) {
                last = it;
                count += 1;
            }
            prev = it;
            it   = it->next;
        } while (it != NULL);
    }
    if (count <= 1 || last == cur) {
        _Z20SetIRQInterruptStatei(irq);
        return;
    }
    if (before == NULL) {
        data_021e169c.head = cur->next;
    } else {
        before->next = cur->next;
    }
    cur->next  = last->next;
    last->next = cur;
    func_020d18b0();
    _Z20SetIRQInterruptStatei(irq);
}
