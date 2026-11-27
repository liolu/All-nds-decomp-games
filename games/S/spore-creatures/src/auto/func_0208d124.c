#include "m2c.h"

extern M2C_UNK data_020e6d9c;

s32 func_0208d124(s32 *arg0) {
    s32 t = *(s32 *) ((u8 *) &data_020e6d9c + arg0[0] * 32 + 4) & 7;
    if (t == 1 && arg0[1] >= 3) {
        goto ret1;
    }
    if (t == 2 && arg0[1] >= 2) {
        goto ret1;
    }
    if (t == 4 && arg0[1] == 2) {
        goto ret1;
    }
    goto ret0;
ret1:
    return 1;
ret0:
    return 0;
}
