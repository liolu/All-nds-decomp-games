#include "m2c.h"

M2C_UNK func_0204f164(s32, M2C_UNK, void *, M2C_UNK *); /* extern */
extern M2C_UNK func_0203afb4;

void func_0203afc0(void *arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x58) + (M2C_FIELD(arg0, s8 *, 0x4D) * 4)), void **, 0xC68);
    if (temp_r0 != NULL) {
        temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2C);
        if (temp_r0_2 != 0) {
            func_0204f164(temp_r0_2, 1, arg0, &func_0203afb4);
        }
    }
}
