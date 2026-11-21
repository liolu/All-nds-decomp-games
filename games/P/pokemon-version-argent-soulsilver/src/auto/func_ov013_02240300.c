#include "m2c.h"

typedef struct {
    u16 cnt;
    u8 p2;
    u8 p3;
    u32 slot[1];
} St;

u32 func_020d1204(u32);
u32 _Z24EnableSpecificInterruptsj(u32);
s32 func_020ccd3c(s32, s32);

u32 func_ov013_02240300(St *s) {
    u32 r;
    u32 irq;
    u8 b2;
    u8 b3;

    r   = 0;
    irq = func_020d1204(1);
    b3  = s->p3;
    b2  = s->p2;
    if (b2 != b3) {
        s->p3 = (u8) func_020ccd3c(b3 + s->cnt - 1, s->cnt);
        r     = s->slot[s->p3];
    }
    _Z24EnableSpecificInterruptsj(irq);
    return r;
}
