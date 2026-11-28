#include "m2c.h"

M2C_UNK func_02091430(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020d4334();                            /* extern */
extern M2C_UNK func_020adf30;

s32 func_020d4078(s32 arg0) {
    func_020d4334();
    func_02091430(arg0 + 0x18, 0xA, 4, &func_020adf30);
    return arg0;
}
