#include "m2c.h"

M2C_UNK func_02014268(M2C_UNK *, s32);              /* extern */
s32 func_02016b20(M2C_UNK *);                       /* extern */
s32 func_02016ad8(s32);                             /* extern */
M2C_UNK func_020763ac();                            /* extern */

void func_020795e0(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_020763ac();
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 4)    = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    if (arg0 != 0) {
        do {

        } while (func_02016b20(sp0) != 0);
        func_02014268(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_02016ad8(arg1) != 0);
    }
    M2C_FIELD((void *) 0x04000448, s32 *, 0)  = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, -8) = 2;
}
