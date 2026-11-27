#include "m2c.h"

M2C_UNK func_0200b118(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02083210(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0208326c(s32, s32, M2C_UNK);           /* extern */

s32 func_02014260(s32 arg0) {
    if (arg0 != 0) {
        func_0208326c(arg0, 0x022EC000, 0x200);
        func_02083210(0x10101010, 0x022EC200, 0x600);
    }
    func_0200b118(6, 0x022EC000, 0x3E00, 0x200);
    return 0x022EC000;
}
