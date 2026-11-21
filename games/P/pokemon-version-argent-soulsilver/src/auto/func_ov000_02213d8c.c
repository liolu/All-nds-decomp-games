#include "m2c.h"
void func_ov000_02212f10(s32, s32);
void func_ov000_02213d8c(u8 *o, s32 a) {
    s32 old = *(s32 *) (o + 0x5D0);
    if (old == 0) {
        func_ov000_02212f10(a, 0);
    } else {
        func_ov000_02212f10(a, old);
    }
    *(s32 *) (o + 0x5D0) = a;
}