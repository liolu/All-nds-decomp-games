#include "m2c.h"

s32 func_020920b4(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_02170c80;

s32 func_020919bc(M2C_UNK arg0) {
    if (func_020920b4(M2C_FIELD(&data_02170c80, s32 *, 8), 0x400, arg0) != 0) {
        return 1;
    }
    return 0;
}
