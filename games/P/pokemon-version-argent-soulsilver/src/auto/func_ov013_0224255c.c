#include "m2c.h"
typedef struct N {
    u8 p0[4];
    struct N *next;
    u32 a, b;
    u8 c, d;
} N;
extern u8 **data_ov013_0224f664;
N *func_ov013_02240300(void *);
u32 func_020d1204(u32);
void func_ov013_02241c38(void *, N *);
u32 _Z24EnableSpecificInterruptsj(u32);
N *func_ov013_0224255c(s32 idx, u32 a, u32 b, u8 c, u8 d) {
    N *n = func_ov013_02240300(*(void **) ((u8 *) *(u8 **) &data_ov013_0224f664 + idx * 0x40));
    N *it;
    u32 irq;
    n->a = a;
    n->b = b;
    n->c = c;
    n->d = d;
    irq  = func_020d1204(1);
    it   = *(N **) (*(u8 **) &data_ov013_0224f664 + idx * 0x40 + 0x10);
    while (1) {
        if (c < it->c) {
            func_ov013_02241c38(it, n);
            break;
        }
        it = it->next;
    }
    _Z24EnableSpecificInterruptsj(irq);
    return n;
}
