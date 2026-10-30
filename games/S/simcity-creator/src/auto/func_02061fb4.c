#include "m2c.h"

s32 func_02061e84();                                /* extern */
M2C_UNK func_0206206c(void *, s32, s32, M2C_UNK, s32); /* extern */

void func_02061fb4(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    func_0206206c(arg0, func_02061e84(), M2C_FIELD(arg0, s32 *, 8), arg2, arg3);
}
