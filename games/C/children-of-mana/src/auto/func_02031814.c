/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02031814(void *arg0) {
    s16 var_r2;
    s16 var_r2_2;
    s16 var_r2_3;
    s16 var_r2_4;
    s16 var_r2_5;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r2_6;
    s32 var_r2_7;
    s32 var_r2_8;
    s32 var_r2_9;
    u32 var_r2_10;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r1 < 1) {
        var_r1 = 1;
    } else if (var_r1 > 0x63) {
        var_r1 = 0x63;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (s8) var_r1;
    var_r2                    = M2C_FIELD(arg0, s16 *, 0x14);
    if ((s32) var_r2 < -999) {
        var_r2 = 0xFFFFFC19;
    } else if ((s32) var_r2 > 0x3E7) {
        var_r2 = 0x3E7;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r2;
    var_r2_2                     = M2C_FIELD(arg0, s16 *, 0x16);
    if ((s32) var_r2_2 < 0) {
        var_r2_2 = 0;
    } else if ((s32) var_r2_2 > 0x3E7) {
        var_r2_2 = 0x3E7;
    }
    M2C_FIELD(arg0, s16 *, 0x16) = var_r2_2;
    var_r2_3                     = M2C_FIELD(arg0, s16 *, 0x18);
    if ((s32) var_r2_3 < 0) {
        var_r2_3 = 0;
    } else if ((s32) var_r2_3 > 0x3E7) {
        var_r2_3 = 0x3E7;
    }
    M2C_FIELD(arg0, s16 *, 0x18) = var_r2_3;
    var_r2_4                     = M2C_FIELD(arg0, s16 *, 0x1A);
    if ((s32) var_r2_4 < 0) {
        var_r2_4 = 0;
    } else if ((s32) var_r2_4 > 0x3E7) {
        var_r2_4 = 0x3E7;
    }
    M2C_FIELD(arg0, s16 *, 0x1A) = var_r2_4;
    var_r2_5                     = M2C_FIELD(arg0, s16 *, 0x1C);
    if ((s32) var_r2_5 < 0) {
        var_r2_5 = 0;
    } else if ((s32) var_r2_5 > 0x3E7) {
        var_r2_5 = 0x3E7;
    }
    M2C_FIELD(arg0, s16 *, 0x1C) = var_r2_5;
    var_r2_6                     = M2C_FIELD(arg0, s32 *, 4);
    if (var_r2_6 < 1) {
        var_r2_6 = 1;
    } else if (var_r2_6 > 0x3E7) {
        var_r2_6 = 0x3E7;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r2_6;
    var_r2_7                  = M2C_FIELD(arg0, s32 *, 8);
    if (var_r2_7 < 0) {
        var_r2_7 = 0;
    } else if (var_r2_7 > 0x3E7) {
        var_r2_7 = 0x3E7;
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r2_7;
    temp_r1                   = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r1 < 0) {
        var_r2_8 = 0;
    } else {
        var_r2_8 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r1 <= var_r2_8) {
            var_r2_8 = temp_r1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r2_8;
    temp_r1_2                   = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r1_2 < 0) {
        var_r2_9 = 0;
    } else {
        var_r2_9 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1_2 <= var_r2_9) {
            var_r2_9 = temp_r1_2;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r2_9;
    var_r2_10                    = M2C_FIELD(arg0, u32 *, 0x64);
    if (var_r2_10 > 0x98967FU) {
        var_r2_10 = 0x98967F;
    }
    M2C_FIELD(arg0, u32 *, 0x64) = var_r2_10;
}
