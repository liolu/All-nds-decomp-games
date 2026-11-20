#include "m2c.h"

s32 func_020699f0(void *);                          /* extern */
M2C_UNK func_0206b0b0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0206bbe8(s32);                             /* extern */
M2C_UNK func_02073afc(s32, M2C_UNK);                /* extern */
u32 func_02073b08(s32);                             /* extern */
s32 func_020b132c();                                /* extern */
M2C_UNK func_020b25f0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02069b18(void *arg0) {
    s32 var_r0;
    u32 temp_r0;

    temp_r0 = func_02073b08(M2C_FIELD(arg0, s32 *, 0x1C));
    switch (temp_r0) {
        default:
            break;
        case 0:
            if (temp_r0 != M2C_FIELD(arg0, u32 *, 0xCC)) {
                M2C_FIELD(arg0, s32 *, 0xD0) = 0;
                func_020b25f0(func_0206bbe8(M2C_FIELD(arg0, s32 *, 4)), 2, 0, 1, 3);
                M2C_FIELD(arg0, s16 *, 0xD8) = 0;
            }
            break;
        case 1:
        case 2:
        case 4:
            if (temp_r0 != M2C_FIELD(arg0, u32 *, 0xCC)) {
                if (func_020b132c() == 8) {
                    var_r0 = 3;
                } else {
                    var_r0 = 1;
                }
                M2C_FIELD(arg0, s32 *, 0xD0) = var_r0;
                func_020b25f0(func_0206bbe8(M2C_FIELD(arg0, s32 *, 4)), 2, 0, 3, 1);
            }
            break;
        case 3:
            if (func_020699f0(arg0) != 0) {
                func_02073afc(M2C_FIELD(arg0, s32 *, 0x1C), 4);
            }
            break;
        case 5:
            func_0206b0b0(arg0, 3, 2, 1);
            M2C_FIELD(arg0, s32 *, 0x4C) = 0xB;
            break;
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = temp_r0;
}
