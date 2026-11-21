#include "m2c.h"

s32 func_020a32d8(void *);
void func_ov000_021ff80c(s32, s32);

void func_ov000_021ff920(void *arg0, u8 *arg1, s32 *arg2) {
    s32 r;

    *arg1 = (u8) *arg2;
    r     = func_020a32d8(arg0);
    *arg2 = (s32) *arg1;
    func_ov000_021ff80c(r, -1);
}
