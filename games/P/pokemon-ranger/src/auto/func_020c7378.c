/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c6a58();                                /* extern */
M2C_UNK func_020c7114(M2C_UNK, s32);                /* extern */
M2C_UNK func_020c7128(M2C_UNK, s32);                /* extern */
s32 func_020c713c(M2C_UNK);                         /* extern */
s32 func_020c7224(M2C_UNK);                         /* extern */
M2C_UNK func_020c7b54(s32);                         /* extern */
M2C_UNK func_020c7b5c(s32);                         /* extern */
extern s32 data_020f6be4;

void func_020c7378(void) {
    func_020c7128(2, func_020c7224(2));
    func_020c7114(2, func_020c713c(2));
    if ((data_020f6be4 != 0) && ((func_020c6a58() & 3) != 1)) {
        return;
    }
    func_020c7b54(0x0200002B);
    func_020c7b5c(0x023E0021);
}
