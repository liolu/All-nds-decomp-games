#include "m2c.h"

M2C_UNK func_02006d2c(s32, M2C_UNK);
M2C_UNK func_02006db0(s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK func_01ff81b4(s32, M2C_UNK, M2C_UNK, s32);

void func_02007194(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02006d2c(arg0, -1);
    func_02006db0(arg0, arg1, arg3, 0x01000000);
    if (arg3 == 0) {
        return;
    }
    while (*(volatile u32 *) ((((arg0 * 3) + 2) * 4 + 0xB0) + 0x04000000) & 0x80000000) {
    }
    func_01ff81b4(arg0, arg1, arg2, 0xAF000001);
}
