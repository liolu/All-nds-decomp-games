#include "m2c.h"

s32 func_020360b0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 data_020a8c1c;

s32 func_02035b18(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (data_020a8c1c == 0) {
        return -1;
    }
    return func_020360b0(data_020a8c1c, arg0, arg1, arg2, arg3);
}
