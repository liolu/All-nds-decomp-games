#include "m2c.h"

M2C_UNK func_02056824(s32);                         /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020a2ec4;

s32 func_02055ab8(s32 arg0) {
    func_020cfb60(arg0 + 0x24, 2, 8, &func_020a2ec4);
    func_02056824(arg0);
    return arg0;
}
