#include "m2c.h"

M2C_UNK func_020014c8(s32, u8, u8);                 /* extern */
M2C_UNK func_02066fa4(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_020e0ba0;

s32 func_02000d80(void *arg0) {
    func_02066fa4(0x57, 0);
    func_020014c8(data_020e0ba0 + 0x540, M2C_FIELD(arg0, u8 *, 0x7F), M2C_FIELD(arg0, u8 *, 0x7E));
    return 1;
}
