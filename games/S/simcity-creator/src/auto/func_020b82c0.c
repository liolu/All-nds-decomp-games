#include "m2c.h"

M2C_UNK func_020b442c();                            /* extern */
s8 *func_020b4b2c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020b7ae8(void *, void *, s32);         /* extern */
s32 func_020b7f04(void *);                          /* extern */

void func_020b82c0(void *arg0) {
    s32 temp_r0_2;
    s8 *temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xA34) == 0) {
        return;
    }
    temp_r0                      = func_020b4b2c(arg0 + 4, 2);
    M2C_FIELD(arg0, u8 *, 0xA34) = 0U;
    if (*temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0)     = 6;
        M2C_FIELD(arg0, s32 *, 0xA04) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x9F8) == 0) {
            return;
        }
        func_020b442c();
        return;
    }
    temp_r0_2 = func_020b7f04(arg0);
    if (temp_r0_2 != 0) {
        func_020b7ae8(arg0, arg0 + 0x8EC, temp_r0_2 - 1);
        return;
    }
    func_020b7ae8(arg0, arg0 + 0x8EC, M2C_FIELD(arg0, s32 *, 0xA10) + 1);
}
