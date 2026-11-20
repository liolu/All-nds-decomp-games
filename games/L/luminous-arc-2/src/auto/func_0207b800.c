#include "m2c.h"

M2C_UNK func_020074d4(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0207b9f4(M2C_UNK);                         /* extern */

void func_0207b800(s32 arg0, M2C_UNK arg1) {
    func_020074d4(arg1, func_0207b9f4(0x10) + (arg0 << 8), 0xF0);
}
