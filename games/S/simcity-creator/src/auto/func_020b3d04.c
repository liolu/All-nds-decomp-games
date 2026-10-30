#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020b3db4(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_0216363c;
extern M2C_UNK func_020b4518;

void func_020b3d04(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x60) != 0) {
        return;
    }
    func_02006ee8(arg0, 0, 0x18);
    func_02006ee8(arg0 + 0x18, 0, 0x10);
    func_02006ee8(arg0 + 0x28, 0, 0x18);
    func_02006ee8(arg0 + 0x40, 0, 0x10);
    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &data_0216363c;
    M2C_FIELD(arg0, s8 *, 0x84)       = 0;
    M2C_FIELD(arg0, s32 *, 0x5C)      = 0;
    M2C_FIELD(arg0, s32 *, 0x64)      = 0;
    M2C_FIELD(arg0, s32 *, 0x68)      = 0;
    M2C_FIELD(arg0, s32 *, 0x54)      = 0;
    M2C_FIELD(arg0, s32 *, 0x50)      = 0;
    M2C_FIELD(arg0, u8 *, 0x60)       = 1U;
    func_020b3db4(arg0, &func_020b4518);
}
