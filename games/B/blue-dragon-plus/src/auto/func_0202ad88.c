#include "m2c.h"

M2C_UNK func_0202ab60();                            /* extern */
M2C_UNK func_0203262c(M2C_UNK *, s32);              /* extern */
s32 func_02034e30(M2C_UNK *);                       /* extern */
s32 func_02034e60(s32);                             /* extern */

void func_0202ad88(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_0202ab60();
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 4)    = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    if (arg0 != 0) {
        do {

        } while (func_02034e30(sp0) != 0);
        func_0203262c(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_02034e60(arg1) != 0);
    }
    M2C_FIELD((void *) 0x04000448, s32 *, 0)  = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, -8) = 2;
}
