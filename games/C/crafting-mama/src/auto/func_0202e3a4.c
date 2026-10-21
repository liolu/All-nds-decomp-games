#include "m2c.h"

void *func_02029490();                              /* extern */
M2C_UNK func_0205e6a8(void *);                      /* extern */

void func_0202e3a4(void) {
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r2;
    void *temp_r0;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r2_2;

    temp_r0                         = func_02029490();
    temp_r2                         = M2C_FIELD(temp_r0, s32 *, 0x28) + 1;
    temp_r1                         = temp_r2 << 0xC;
    M2C_FIELD(temp_r0, s32 *, 0x28) = temp_r2;
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x1C), u16 *, 0x12) =
        (u16) (0x1000 - ((s32) (temp_r1 + ((u32) (temp_r1 >> 3) >> 0x1C)) >> 4));
    temp_r1_2                         = M2C_FIELD(temp_r0, void **, 0x1C);
    M2C_FIELD(temp_r1_2, u16 *, 0x10) = (u16) M2C_FIELD(temp_r1_2, u16 *, 0x12);
    temp_r2_2                         = M2C_FIELD(temp_r0, void **, 0x20);
    if (temp_r2_2 != NULL) {
        temp_r1_3                         = M2C_FIELD(temp_r0, s32 *, 0x28) << 0xC;
        M2C_FIELD(temp_r2_2, u16 *, 0x12) = (u16) (0x1000 - ((s32) (temp_r1_3 + ((u32) (temp_r1_3 >> 3) >> 0x1C)) >> 4));
        temp_r1_4                         = M2C_FIELD(temp_r0, void **, 0x20);
        M2C_FIELD(temp_r1_4, u16 *, 0x10) = (u16) M2C_FIELD(temp_r1_4, u16 *, 0x12);
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x28) != 0x10) {
        return;
    }
    func_0205e6a8(temp_r0 + 0x1C);
    func_0205e6a8(temp_r0 + 0x20);
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
}
