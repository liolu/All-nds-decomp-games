#include "m2c.h"

M2C_UNK func_02091430(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020954f4;
extern M2C_UNK func_02095514;

s32 func_02095534(s32 arg0) {
    func_02091430(arg0 + 0x88, 0x10, 0x28, &func_020954f4);
    func_02091430(arg0 + 4, 8, 0x10, &func_02095514);
    return arg0;
}
