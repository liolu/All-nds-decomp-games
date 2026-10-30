#include "m2c.h"

s32 func_0205369c(M2C_UNK);                         /* extern */
M2C_UNK func_020536a8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ae4d4();                            /* extern */
M2C_UNK func_020ae518(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ae62c(s32, M2C_UNK);                /* extern */

void func_0206e1c0(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_020ae62c(func_0205369c(arg1), 0x2D);
    func_0205369c(arg1);
    func_020ae4d4();
    func_020ae518(func_0205369c(arg1), 2);
    if (arg2 != 0) {
        return;
    }
    func_020536a8(arg1, 0);
}
