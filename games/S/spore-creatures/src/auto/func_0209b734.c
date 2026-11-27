#include "m2c.h"

s8 func_0209179c(s32, s32);                         /* extern */
s8 func_02091854(s32, s32);                         /* extern */
s32 func_0209ba0c(s32, s32, M2C_UNK, M2C_UNK);      /* extern */

void *func_0209b734(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)  = func_0209ba0c(arg2, arg3, arg1, 0);
    M2C_FIELD(arg0, s32 *, 4)  = 0;
    M2C_FIELD(arg0, s32 *, 8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
    if ((arg2 != 0) && (arg3 != 0)) {
        M2C_FIELD(arg0, s8 *, 0xC) = func_0209179c(arg3, arg2);
        M2C_FIELD(arg0, s8 *, 0xD) = func_02091854(arg3, arg2);
    }
    return arg0;
}
