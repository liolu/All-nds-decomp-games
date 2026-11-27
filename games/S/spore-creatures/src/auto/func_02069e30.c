#include "m2c.h"

M2C_UNK func_02069a80(s32);                         /* extern */
M2C_UNK func_02069e88(s32);                         /* extern */
M2C_UNK func_02089f8c(s32);                         /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0200d320;
extern M2C_UNK func_02069e2c;

s32 func_02069e30(s32 arg0) {
    func_02089f8c(arg0 + 0x348);
    func_02069e88(arg0 + 0x320);
    func_02069a80(arg0 + 0x310);
    func_020cfb60(arg0 + 0x24, 0x10, 0x2C, &func_02069e2c);
    func_020cfb60(arg0, 2, 0xC, &func_0200d320);
    return arg0;
}
