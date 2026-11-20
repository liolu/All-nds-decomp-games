/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020663e4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020663f8(M2C_UNK, s32);                /* extern */
s32 func_0206640c(M2C_UNK);                         /* extern */
s32 func_020664f8(M2C_UNK);                         /* extern */
extern s32 data_020e6584;

void func_020666d0(void) {
    if (data_020e6584 != 0) {
        return;
    }
    data_020e6584 = 1;
    func_020663f8(0, func_020664f8(0));
    func_020663e4(0, func_0206640c(0));
    func_020663e4(2, 0);
    func_020663f8(2, 0);
    func_020663f8(3, func_020664f8(3));
    func_020663e4(3, func_0206640c(3));
    func_020663f8(4, func_020664f8(4));
    func_020663e4(4, func_0206640c(4));
    func_020663f8(5, func_020664f8(5));
    func_020663e4(5, func_0206640c(5));
    func_020663f8(6, func_020664f8(6));
    func_020663e4(6, func_0206640c(6));
}
