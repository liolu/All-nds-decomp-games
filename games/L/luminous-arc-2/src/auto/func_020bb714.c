#include "m2c.h"

s32 func_020bb594();                                /* extern */
s32 func_020bb638(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020bb6a4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020bb6e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020bb714(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_020bb594() == 0) {
        return 0;
    }
    if (func_020bb6e0(arg0, arg1) == 0) {
        return 0;
    }
    if (func_020bb638(arg0, arg1) == 0) {
        return 0;
    }
    if (func_020bb6a4(arg0, arg1) != 0) {
        return 1;
    }
    return 0;
}
