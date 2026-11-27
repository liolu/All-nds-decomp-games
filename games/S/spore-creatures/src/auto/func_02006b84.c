#include "m2c.h"

M2C_UNK func_02006bb0();                            /* extern */
M2C_UNK func_020cfb60(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02006b6c;

s32 func_02006b84(s32 arg0) {
    func_02006bb0();
    func_020cfb60(arg0 + 8, 2, 0x18, &func_02006b6c);
    return arg0;
}
