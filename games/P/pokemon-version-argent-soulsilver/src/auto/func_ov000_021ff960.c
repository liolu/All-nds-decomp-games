#include "m2c.h"

s32 func_020a2f84(void *, void *, void *, void *, u8 *);
M2C_UNK func_ov000_021ff80c(s32, M2C_UNK);

void func_ov000_021ff960(void *arg0, void *arg1, void *arg2, void *arg3, u8 *arg4, s32 *arg5) {
    s32 temp_r0;
    *arg4   = (u8) *arg5;
    temp_r0 = func_020a2f84(arg0, arg1, arg2, arg3, arg4);
    *arg5   = (s32) *arg4;
    func_ov000_021ff80c(temp_r0, -1);
}
