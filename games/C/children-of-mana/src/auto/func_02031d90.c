#include "m2c.h"

void func_02031d90(void *arg0, void *arg1) {
    s8 var_r2;
    s8 var_r2_10;
    s8 var_r2_2;
    s8 var_r2_3;
    s8 var_r2_4;
    s8 var_r2_5;
    s8 var_r2_6;
    s8 var_r2_7;
    s8 var_r2_8;
    s8 var_r2_9;

    var_r2                       = 0;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s16 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s16 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s16 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s16 *, 0x16);
    M2C_FIELD(arg0, s8 *, 0x34)  = (s8) M2C_FIELD(arg1, s16 *, 0x18);
    M2C_FIELD(arg0, s8 *, 0x35)  = (s8) M2C_FIELD(arg1, s16 *, 0x1A);
    if (M2C_FIELD(arg1, s16 *, 0x1C) != 0) {
        var_r2 = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x36) = var_r2;
    if (M2C_FIELD(arg1, s16 *, 0x1E) != 0) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x37) = var_r2_2;
    if (M2C_FIELD(arg1, s16 *, 0x20) != 0) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x38) = var_r2_3;
    if (M2C_FIELD(arg1, s16 *, 0x22) != 0) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x39) = var_r2_4;
    if (M2C_FIELD(arg1, s16 *, 0x24) != 0) {
        var_r2_5 = 1;
    } else {
        var_r2_5 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3A) = var_r2_5;
    if (M2C_FIELD(arg1, s16 *, 0x26) != 0) {
        var_r2_6 = 1;
    } else {
        var_r2_6 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3B) = var_r2_6;
    if (M2C_FIELD(arg1, s16 *, 0x28) != 0) {
        var_r2_7 = 1;
    } else {
        var_r2_7 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3C) = var_r2_7;
    if (M2C_FIELD(arg1, s16 *, 0x2A) != 0) {
        var_r2_8 = 1;
    } else {
        var_r2_8 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3D) = var_r2_8;
    if (M2C_FIELD(arg1, s16 *, 0x2C) != 0) {
        var_r2_9 = 1;
    } else {
        var_r2_9 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3E) = var_r2_9;
    if (M2C_FIELD(arg1, s16 *, 0x2E) != 0) {
        var_r2_10 = 1;
    } else {
        var_r2_10 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x3F)  = var_r2_10;
    M2C_FIELD(arg0, s8 *, 0x40)  = (s8) M2C_FIELD(arg1, s16 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg1, s16 *, 0x32) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s16 *, 0x34) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg1, s16 *, 0x36) << 0xC);
    M2C_FIELD(arg0, s16 *, 0x50) = (s16) M2C_FIELD(arg1, s16 *, 0x38);
    M2C_FIELD(arg0, s16 *, 0x52) = (s16) M2C_FIELD(arg1, s16 *, 0x3A);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s16 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s16 *, 0x3E);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s16 *, 0x40);
}
