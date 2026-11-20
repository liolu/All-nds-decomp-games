#include "m2c.h"

s32 func_02061e3c();                                /* extern */
M2C_UNK func_02062100(void *, s32, s32, M2C_UNK, s32, s32); /* extern */

void func_02061fec(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    func_02062100(arg0, func_02061e3c(), M2C_FIELD(arg0, s32 *, 8), arg2, arg3, arg4);
}
