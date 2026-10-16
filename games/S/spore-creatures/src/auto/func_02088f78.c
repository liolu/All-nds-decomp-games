#include "m2c.h"

s32 func_020893e0(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 func_02088f78(M2C_UNK arg0, s32 *arg1, M2C_UNK arg2) {
    if (func_020893e0(arg0, arg1, 0, arg2) == 0) {
        do {
            *arg1 += 1;
        } while (func_020893e0(arg0, arg1, 0, arg2) == 0);
    }
    return 1;
}
