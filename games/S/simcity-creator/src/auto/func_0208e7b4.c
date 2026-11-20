#include "m2c.h"

void func_0208e7b4(void *arg0, s32 arg1, void *arg2, void *arg3) {
    s16 var_r0;
    s16 var_r0_2;
    s16 var_r0_3;
    s16 var_r0_4;

    M2C_FIELD(arg3, s16 *, 0) = (s16) (M2C_FIELD(arg0, u16 *, 0) - arg1);
    M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg0, u16 *, 2) - arg1);
    M2C_FIELD(arg3, s16 *, 4) = (s16) (M2C_FIELD(arg0, u16 *, 4) + arg1);
    M2C_FIELD(arg3, s16 *, 6) = (s16) (M2C_FIELD(arg0, u16 *, 6) + arg1);
    var_r0                    = M2C_FIELD(arg3, s16 *, 0);
    if ((s32) var_r0 < 0) {
        var_r0 = 0;
    }
    M2C_FIELD(arg2, s16 *, 0) = var_r0;
    var_r0_2                  = M2C_FIELD(arg3, s16 *, 2);
    if ((s32) var_r0_2 < 0) {
        var_r0_2 = 0;
    }
    M2C_FIELD(arg2, s16 *, 2) = var_r0_2;
    var_r0_3                  = M2C_FIELD(arg3, s16 *, 4);
    if ((s32) var_r0_3 > 0x7F) {
        var_r0_3 = 0x7F;
    }
    M2C_FIELD(arg2, s16 *, 4) = var_r0_3;
    var_r0_4                  = M2C_FIELD(arg3, s16 *, 6);
    if ((s32) var_r0_4 > 0x7F) {
        var_r0_4 = 0x7F;
    }
    M2C_FIELD(arg2, s16 *, 6) = var_r0_4;
}
