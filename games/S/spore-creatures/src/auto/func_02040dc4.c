#include "m2c.h"

M2C_UNK func_020571ac(s32);                         /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02012918;

s32 func_02040dc4(s32 arg0) {
    func_020cfb60(arg0 + 0x58, 0x10, 4, &func_02012918);
    func_020571ac(arg0);
    return arg0;
}
