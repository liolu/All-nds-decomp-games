#include "m2c.h"

extern u8 data_0210e528[];
extern u8 data_ov000_0221a534[];

s32 func_020e9734(void *, void *);
s32 func_ov000_022132dc(void *);
u8 *func_ov000_02212d68(void *, void *, s32);
s32 func_020eb82c(u8 *);

s32 func_ov000_02212dd4(void *arg0, void *arg1, s32 arg2) {
    u8 *p;
    s32 c;
    s32 f;

    if (func_020e9734(arg1, data_ov000_0221a534) == 0) {
        return func_ov000_022132dc(arg0);
    }
    p = func_ov000_02212d68(arg0, arg1, 0);
    if (p == NULL) {
        goto ret2;
    }
    c = p[0];
    if (c < 0 || c >= 0x80) {
        f = 0;
    } else {
        f = *(u16 *) (data_0210e528 + c * 2) & 8;
    }
    if (f != 0) {
        goto do_call;
    }
ret2:
    return arg2;
do_call:
    return func_020eb82c(p);
}
