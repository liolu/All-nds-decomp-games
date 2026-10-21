#include "m2c.h"

M2C_UNK func_02005530(void *);                      /* extern */
M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0200ee64(void *arg0, s16 arg1, s16 arg2) {
    s16 var_r5;

    var_r5                        = arg1;
    M2C_FIELD(arg0, s32 *, 0x5F0) = 0x3D;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 3);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 0;
    func_02005530(arg0);
    M2C_FIELD(arg0, s8 *, 0x600)  = 1;
    M2C_FIELD(arg0, s32 *, 0x734) = 0x4000;
    if (var_r5 == 0) {
        var_r5 = 1;
    }
    M2C_FIELD(arg0, s16 *, 0x700) = var_r5;
    M2C_FIELD(arg0, s16 *, 0x6FE) = arg2;
}
