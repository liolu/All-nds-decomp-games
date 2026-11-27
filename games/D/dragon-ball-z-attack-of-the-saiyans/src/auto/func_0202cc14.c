#include "m2c.h"

M2C_UNK func_0202caf4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02083170(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_0209c0ec;

void func_0202cc14(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02083170(0, *((M2C_UNK *) ((s8 *) &data_0209c0ec + (arg0 * 4))), 0x10000);
    func_0202caf4(arg0, 0, arg1, arg2, arg3);
}
