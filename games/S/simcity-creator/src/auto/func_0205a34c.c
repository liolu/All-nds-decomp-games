#include "m2c.h"

M2C_UNK func_0201c004(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0205b910();                            /* extern */
extern M2C_UNK func_020a3b38;

s32 func_0205a34c(s32 arg0) {
    func_0205b910();
    func_0201c004(arg0 + 0x374, 0x14, 0x50, &func_020a3b38);
    func_0201c004(arg0 + 0x54, 0xA, 0x50, &func_020a3b38);
    return arg0;
}
