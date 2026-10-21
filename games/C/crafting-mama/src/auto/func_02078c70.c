#include "m2c.h"

s32 func_02078c70(s32 arg0, void *arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    if (arg0 >= 0x64) {
        var_r0_4 = 0;
        if (M2C_FIELD(arg1, s32 *, 0) != 0) {
            return 0;
        }
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            return 1;
        }
        if (M2C_FIELD(arg1, s32 *, 8) != 0) {
            return 2;
        }
        if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
            var_r0_4 = 3;
        }
        return var_r0_4;
    }
    if (arg0 >= 0x4B) {
        var_r0_3 = 1;
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            return 1;
        }
        if (M2C_FIELD(arg1, s32 *, 8) != 0) {
            return 2;
        }
        if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
            return 3;
        }
        if (M2C_FIELD(arg1, s32 *, 0) != 0) {
            var_r0_3 = 0;
        }
        return var_r0_3;
    }
    if (arg0 >= 0x32) {
        var_r0_2 = 2;
        if (M2C_FIELD(arg1, s32 *, 8) != 0) {
            return 2;
        }
        if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
            return 3;
        }
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            return 1;
        }
        if (M2C_FIELD(arg1, s32 *, 0) != 0) {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    var_r0 = 3;
    if (M2C_FIELD(arg1, s32 *, 0xC) != 0) {
        return 3;
    }
    if (M2C_FIELD(arg1, s32 *, 8) != 0) {
        return 2;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        return 1;
    }
    if (M2C_FIELD(arg1, s32 *, 0) != 0) {
        var_r0 = 0;
    }
    return var_r0;
}
