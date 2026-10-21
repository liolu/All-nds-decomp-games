#include "m2c.h"

void func_02076ec8(void *arg0, void *arg1) {
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 temp_r2_4;
    u8 temp_r2_5;
    u8 temp_r2_6;
    u8 temp_r2_7;

    temp_r2 = M2C_FIELD(arg1, u8 *, 1);
    if ((u32) temp_r2 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 1) = temp_r2;
    }
    temp_r2_2 = M2C_FIELD(arg1, u8 *, 8);
    if ((u32) temp_r2_2 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 8) = temp_r2_2;
    }
    temp_r2_3 = M2C_FIELD(arg1, u8 *, 9);
    if ((u32) temp_r2_3 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 9) = temp_r2_3;
    }
    temp_r2_4 = M2C_FIELD(arg1, u8 *, 0xA);
    if ((u32) temp_r2_4 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 0xA) = temp_r2_4;
    }
    temp_r2_5 = M2C_FIELD(arg1, u8 *, 0xB);
    if ((u32) temp_r2_5 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 0xB) = temp_r2_5;
    }
    temp_r2_6 = M2C_FIELD(arg1, u8 *, 0xC);
    if ((u32) temp_r2_6 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 0xC) = temp_r2_6;
    }
    temp_r2_7 = M2C_FIELD(arg1, u8 *, 0xD);
    if ((u32) temp_r2_7 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 0xD) = temp_r2_7;
    }
    temp_r1 = M2C_FIELD(arg1, u8 *, 0xE);
    if ((u32) temp_r1 <= 0x7FU) {
        M2C_FIELD(arg0, u8 *, 0xE) = temp_r1;
    }
}
