#include "m2c.h"

s32 func_02066ea4(s32, s32);                        /* extern */
M2C_UNK func_02067d10();                            /* extern */
s32 func_0206e848();                                /* extern */
M2C_UNK func_0206f614(s32, M2C_UNK);                /* extern */
M2C_UNK func_0206f9cc(s32, s32, M2C_UNK);           /* extern */
extern s32 data_020f46b0;
extern s32 data_020f4720;

void func_0206e77c(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    if ((u32) M2C_FIELD(arg0, u16 *, 0) > 0x18CU) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r0 != 0) {
            func_0206f614(temp_r0, 0);
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
    } else if ((func_0206e848() != 0) && (func_02066ea4(data_020f46b0, M2C_FIELD(arg0, s32 *, 0x10)) != 0)) {
        func_02067d10();
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x48);
        if (temp_r1 != 0) {
            func_0206f9cc(data_020f4720, temp_r1, 0);
        }
    }
    M2C_FIELD(arg0, u16 *, 0) = 0U;
}
