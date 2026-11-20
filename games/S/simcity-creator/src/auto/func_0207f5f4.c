#include "m2c.h"

M2C_UNK func_02006e38(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0207f5f4(void *arg0, u32 arg1, u32 arg2) {
    func_02006e38(0, arg0 + 0x3C, 0x3C80);
    func_02006e38(0, arg0 + 0x3CBC, 0x3C80);
    if (arg1 == 0) {
        M2C_FIELD(arg0, u16 *, 0x34) = 0U;
    } else if (arg1 >= 0x44U) {
        M2C_FIELD(arg0, u16 *, 0x34) = 0x28U;
    } else {
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) (arg1 - 0x1C);
    }
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (M2C_FIELD(arg0, u16 *, 0x34) + 0x58);
    if (arg2 == 0) {
        M2C_FIELD(arg0, u16 *, 0x36) = 0U;
    } else if (arg2 >= 0x44U) {
        M2C_FIELD(arg0, u16 *, 0x36) = 0x28U;
    } else {
        M2C_FIELD(arg0, u16 *, 0x36) = (u16) (arg2 - 0x1C);
    }
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) (M2C_FIELD(arg0, u16 *, 0x36) + 0x58);
}
