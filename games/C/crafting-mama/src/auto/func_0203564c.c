#include "m2c.h"

void func_0203564c(void *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;

    if (arg0 == NULL) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2 & 2) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2 & 0xFFFD);
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_2 & 8) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_2 & 0xFFF7);
    }
    temp_r2_3 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_3 & 0x10) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_3 & 0xFFEF);
    }
    temp_r2_4 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_4 & 0x20) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_4 & 0xFFDF);
    }
    temp_r2_5 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_5 & 0x40) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_5 & 0xFFBF);
    }
    temp_r2_6 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2_6 & 0x80) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r2_6 & 0xFF7F);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
