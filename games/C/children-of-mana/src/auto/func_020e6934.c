/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205fee8(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_021310a8;

void func_020e6934(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 == 0) {
        ((s8 *) &data_021310a8)[arg0] = 0;
        return;
    }
    ((s8 *) &data_021310a8)[arg0] = 1;
    func_0205fee8(arg1, arg2, arg0);
}
