#include "m2c.h"

s32 func_0205369c();                                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_02079f84(s32, s16, s32);               /* extern */
M2C_UNK func_020ae68c(s32, s32);                    /* extern */
s32 func_020b11f0(s32);                             /* extern */
s32 func_020b1200(s32);                             /* extern */

void func_020a0b70(void *arg0) {
    s32 temp_r0;

    if (func_020b1200(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        return;
    }
    if (func_020b11f0(M2C_FIELD(arg0, s32 *, 0x24)) <= 0xAA) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18C);
    if (temp_r0 < 0) {
        return;
    }
    M2C_FIELD((arg0 + (temp_r0 * 0x10)), s32 *, 0x6C)                       = 3;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x18C) * 0x10)), s16 *, 0x68) = (s16) M2C_FIELD(arg0, u8 *, 0x5C);
    func_02079f84(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x18C) * 0x10)), s16 *, 0x64),
                  M2C_FIELD(arg0, s32 *, 0x58));
    M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
    M2C_FIELD(arg0, s32 *, 0x18C) = -1;
    M2C_FIELD(arg0, s32 *, 0x58)  = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 9;
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x30));
    func_020ae68c(func_0205369c(), 0x1006);
}
