#include "m2c.h"

void func_02056944(void *arg0, s32 *arg1, void *arg2) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3                     = M2C_FIELD(arg0, void **, 0xC);
    temp_r3_2                   = temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC);
    *arg1                       = M2C_FIELD(temp_r3_2, s32 *, 0x38);
    M2C_FIELD(arg2, s16 *, 0)   = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x2C);
    M2C_FIELD(arg2, s16 *, 2)   = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x2E);
    M2C_FIELD(arg2, s16 *, 4)   = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x30);
    M2C_FIELD(arg2, s16 *, 6)   = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x32);
    M2C_FIELD(arg2, s16 *, 8)   = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x34);
    M2C_FIELD(arg2, s16 *, 0xA) = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x36);
}
