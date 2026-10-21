/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c7114(M2C_UNK, s32);                /* extern */
M2C_UNK func_020c7128(M2C_UNK, s32);                /* extern */
s32 func_020c713c(M2C_UNK);                         /* extern */
s32 func_020c7224(M2C_UNK);                         /* extern */
extern s32 data_020f6be0;

void func_020c73f8(void) {
    if (data_020f6be0 != 0) {
        return;
    }
    data_020f6be0 = 1;
    func_020c7128(0, func_020c7224(0));
    func_020c7114(0, func_020c713c(0));
    func_020c7114(2, 0);
    func_020c7128(2, 0);
    func_020c7128(3, func_020c7224(3));
    func_020c7114(3, func_020c713c(3));
    func_020c7128(4, func_020c7224(4));
    func_020c7114(4, func_020c713c(4));
    func_020c7128(5, func_020c7224(5));
    func_020c7114(5, func_020c713c(5));
    func_020c7128(6, func_020c7224(6));
    func_020c7114(6, func_020c713c(6));
}
