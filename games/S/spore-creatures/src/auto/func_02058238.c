#include "m2c.h"

M2C_UNK func_02057564();                            /* extern */
M2C_UNK func_02058390(void *, M2C_UNK);             /* extern */
M2C_UNK func_02096858(s32, u16, M2C_UNK);           /* extern */

void func_02058238(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_3;
    u16 temp_r1;
    u16 temp_r1_2;
    u8 temp_r0_2;

    func_02057564();
    if (arg1 != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        if (temp_r0 == 0) {
            return;
        }
        if (arg2 != 0) {
            temp_r1 = M2C_FIELD(arg0, u16 *, 0x64);
            if (temp_r1 != 0xFFFF) {
                func_02096858(temp_r0, temp_r1, 0);
                return;
            }
            func_02058390(arg0, 1);
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x38);
            if ((temp_r0_2 != 0) && (temp_r0_2 != 1) && (temp_r0_2 != 2)) {

            } else {
                M2C_FIELD(arg0, u8 *, 0x60) = 5U;
            }
            return;
        }
        if (M2C_FIELD(arg0, u16 *, 0x66) != 0xFFFF) {
            return;
        }
        func_02058390(arg0, 1);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x60) != 0) {
        return;
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x5C);
    if (temp_r0_3 == 0) {
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, u16 *, 0x6A);
    if (temp_r1_2 == 0xFFFF) {
        func_02058390(arg0, 0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x3D) != 0) {
        return;
    }
    func_02096858(temp_r0_3, temp_r1_2, 0);
}
