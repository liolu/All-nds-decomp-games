/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02065e24();                                /* extern */
M2C_UNK func_020663e4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020663f8(M2C_UNK, s32);                /* extern */
s32 func_0206640c(M2C_UNK);                         /* extern */
s32 func_020664f8(M2C_UNK);                         /* extern */
M2C_UNK func_02066de4(s32);                         /* extern */
M2C_UNK func_02066dec(s32);                         /* extern */
extern s32 data_020e6588;

void func_02066650(void) {
    func_020663f8(2, func_020664f8(2));
    func_020663e4(2, func_0206640c(2));
    if ((data_020e6588 != 0) && ((func_02065e24() & 3) != 1)) {
        return;
    }
    func_02066de4(0x0200002B);
    func_02066dec(0x023E0021);
}
