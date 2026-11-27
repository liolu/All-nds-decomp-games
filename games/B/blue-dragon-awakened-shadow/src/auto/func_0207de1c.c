#include "m2c.h"

s32 PM_GetLCDPower();                               /* extern */
s32 PM_SetLCDPower(M2C_UNK);                        /* extern */
M2C_UNK func_0200f9b0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0207df3c();                            /* extern */
M2C_UNK func_0207df64();                            /* extern */
M2C_UNK func_0207df8c();                            /* extern */
M2C_UNK func_0207df9c();                            /* extern */
extern M2C_UNK data_02110430;
extern void **data_021654c4;

void func_0207de1c(s32 arg0) {
    s32 var_r0;

    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) == 1) {
        if (arg0 == 0) {
            if (data_021654c4 == NULL) {
                var_r0 = 0;
            } else {
                var_r0 = M2C_FIELD(*data_021654c4, s32(**)(), 0x64)(data_021654c4);
            }
            if (var_r0 != 0) {
                return;
            }
            func_0200f9b0(0xC, 0, 0);
            return;
        }
        if (M2C_FIELD(&data_02110430, u8 *, 2) != 0) {
            return;
        }
        if (PM_GetLCDPower() != 1) {
            return;
        }
        PM_SetLCDPower(0);
        M2C_FIELD(&data_02110430, u8 *, 2) = 1U;
        return;
    }
    if (M2C_FIELD(&data_02110430, u8 *, 2) == 0) {
        return;
    }
    if (PM_GetLCDPower() != 0) {
        return;
    }
    if (PM_SetLCDPower(1) == 0) {
        return;
    }
    M2C_FIELD(&data_02110430, u8 *, 2) = 0U;
    func_0207df8c();
    func_0207df3c();
    func_0207df9c();
    func_0207df64();
}
