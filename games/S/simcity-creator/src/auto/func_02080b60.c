#include "m2c.h"

M2C_UNK func_02080060(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02080098(void *, M2C_UNK, s32);        /* extern */

void func_02080b60(void *arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C);
    temp_r2 = *arg2;
    if (temp_r2 < temp_r3) {
        temp_r2_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) * ((temp_r3 - temp_r2) + 1)) >> 0xC;
        if (temp_r2_2 != 0) {
            func_02080060(arg0, arg1, temp_r2_2);
        }
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    temp_r0 = *arg2;
    if (temp_r0 >= temp_r1) {
        return;
    }
    temp_r2_3 = (s32) (M2C_FIELD(arg0, s32 *, 0x28) * ((temp_r1 - temp_r0) + 1)) >> 0xC;
    if (temp_r2_3 == 0) {
        return;
    }
    func_02080098(arg0, arg1, temp_r2_3);
}
