#include "m2c.h"

s32 func_0206127c();                                /* extern */
M2C_UNK func_0206b554(s32);                         /* extern */
M2C_UNK func_0206c298(void *, M2C_UNK, s32);        /* extern */
void *func_020702f0(s32, s32);                      /* extern */
s32 func_0207377c(s32, s32);                        /* extern */
s32 func_020b132c();                                /* extern */

void func_0206ce8c(void *arg0) {
    s32 temp_r4;

    func_0206b554(M2C_FIELD(arg0, s32 *, 0xC));
    func_020b132c();
    temp_r4 = func_0206127c();
    if (func_0207377c(M2C_FIELD(arg0, s32 *, 4), func_020b132c()) < 0x32) {
        return;
    }
    if ((M2C_FIELD(func_020702f0(M2C_FIELD(arg0, s32 *, 4), temp_r4), s32 *, 8) == 0) && (M2C_FIELD(arg0, u8 *, 0x78) == 0)) {
        M2C_FIELD(arg0, u8 *, 0x78) = 1U;
        if (func_020b132c() == 8) {
            return;
        }
        func_0206c298(arg0, 0x41, func_020b132c() - 1);
    }
}
