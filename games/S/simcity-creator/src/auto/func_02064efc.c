#include "m2c.h"

void func_02064efc(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r2;

    var_r1 = arg1;
    var_r2 = arg2;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) var_r1;
    if (var_r2 < 0x18) {
        var_r2 = 0x18;
    }
    M2C_FIELD(arg0, s16 *, 4) = (s16) var_r2;
    var_r1_2                  = M2C_FIELD(arg0, s16 *, 0) + 0xA;
    if (var_r1_2 >= 0x100) {
        var_r1_2 = 0x100;
    }
    M2C_FIELD(arg0, s16 *, 2) = (s16) var_r1_2;
    var_r1_3                  = M2C_FIELD(arg0, s16 *, 4) + 0xA;
    if (var_r1_3 >= 0x91) {
        var_r1_3 = 0x91;
    }
    M2C_FIELD(arg0, s16 *, 6) = (s16) var_r1_3;
    M2C_FIELD(arg0, s8 *, 8)  = 0;
}
