#include "m2c.h"

s32 func_02055abc();           /* extern */
s32 func_02056a5c();           /* extern */
s32 func_02058748();           /* extern */

s32 func_02054880(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if ((func_02058748(M2C_FIELD(arg0, s32 *, 0x10)) != 0) || (func_02058748(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2) != 0) ||
        (func_02055abc(M2C_FIELD(arg0, s32 *, 0x24), arg1, arg2) != 0) ||
        (func_02056a5c(M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2) != 0) ||
        (func_02058748(M2C_FIELD(arg0, s32 *, 0x18), arg1, arg2) != 0)) {
        return 1;
    }
    return 0;
}
