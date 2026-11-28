#include "m2c.h"

M2C_UNK func_0207432c(s32);                         /* extern */

void func_0203e0ec(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        func_0207432c(M2C_FIELD(arg0, s32 *, 0x1C));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_0207432c(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_0207432c(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
}
