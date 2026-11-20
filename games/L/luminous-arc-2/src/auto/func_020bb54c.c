#include "m2c.h"

s32 func_020aadbc();                                /* extern */
s32 func_020be110(s32, s32, u16, M2C_UNK, s32);     /* extern */

s32 func_020bb54c(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (func_020be110(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 4), arg1, arg2) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x88) = func_020aadbc();
    return 1;
}
