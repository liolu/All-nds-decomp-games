#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b442c();                            /* extern */
M2C_UNK func_020b46ac(s32);                         /* extern */

void func_020b7cf0(void *arg0) {
    func_02006ee8(arg0 + 0x9EC, 0, 6);
    func_02006ee8(arg0 + 0x8EC, 0, 0x100);
    func_02006ee8(arg0 + 0x4EC, 0, 0x300);
    func_02006ee8(arg0 + 0xA3C, 0, 0xFA);
    func_020b46ac(arg0 + 4);
    func_020b46ac(arg0 + 0x278);
    M2C_FIELD(arg0, s8 *, 0xA28)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA18) = 0;
    M2C_FIELD(arg0, s8 *, 0xA29)  = 0;
    M2C_FIELD(arg0, s8 *, 0xA2A)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9F4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA1C) = 0;
    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0xA2C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA10) = 0;
    M2C_FIELD(arg0, u16 *, 0xA3A) = (u16) M2C_FIELD(arg0, u16 *, 0xA36);
    M2C_FIELD(arg0, u16 *, 0xA36) = 0U;
    M2C_FIELD(arg0, s16 *, 0xA38) = 0;
    M2C_FIELD(arg0, s8 *, 0xA14)  = 0;
    if (M2C_FIELD(arg0, s32 *, 0x9F8) == 0) {
        return;
    }
    func_020b442c();
}
