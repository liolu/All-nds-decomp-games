#include "m2c.h"

void *func_0207b9f4(M2C_UNK);                       /* extern */
extern M2C_UNK data_0217024c;

void func_0207b8d0(void) {
    u8 temp_r0_2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;

    temp_r0 = func_0207b9f4(1);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 8) & 0x10) {
        temp_r1                     = func_0207b9f4(0x10);
        M2C_FIELD(temp_r0, u8 *, 8) = (u8) (M2C_FIELD(temp_r0, u8 *, 8) & ~0x10);
        M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK, void *, s32), 4)(0x10, temp_r1, 0xD18);
    }
    if (M2C_FIELD(temp_r0, u8 *, 8) & 8) {
        temp_r1_2                   = func_0207b9f4(8);
        M2C_FIELD(temp_r0, u8 *, 8) = (u8) (M2C_FIELD(temp_r0, u8 *, 8) & ~8);
        M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK, void *, s32), 4)(8, temp_r1_2, 0xC);
    }
    if (M2C_FIELD(temp_r0, u8 *, 8) & 4) {
        temp_r1_3                   = func_0207b9f4(4);
        M2C_FIELD(temp_r0, u8 *, 8) = (u8) (M2C_FIELD(temp_r0, u8 *, 8) & ~4);
        M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK, void *, s32), 4)(4, temp_r1_3, 0x58);
    }
    if (M2C_FIELD(temp_r0, u8 *, 8) & 2) {
        temp_r1_4                   = func_0207b9f4(2);
        M2C_FIELD(temp_r0, u8 *, 8) = (u8) (M2C_FIELD(temp_r0, u8 *, 8) & ~2);
        M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK, void *, s32), 4)(2, temp_r1_4, 0x2300);
    }
    temp_r0_2 = M2C_FIELD(temp_r0, u8 *, 8);
    if (!(temp_r0_2 & 1)) {
        return;
    }
    M2C_FIELD(temp_r0, u8 *, 8) = (u8) (temp_r0_2 & ~1);
    M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK, void *, s32), 4)(1, temp_r0, 0x24);
    M2C_FIELD(&data_0217024c, s32 *, 0xC) = 0;
}
