#include "m2c.h"

M2C_UNK func_02028b30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02028db0(M2C_UNK);                     /* extern */
extern s32 data_0209758c;

void func_02026d98(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02028db0(arg1);
    data_0209758c = arg0;
    func_02028b30(0xF, 7, 1, arg2);
}
