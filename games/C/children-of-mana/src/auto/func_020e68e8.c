/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205fe60(s32, M2C_UNK);                /* extern */
extern s8 data_021310a8;

void func_020e68e8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 == 0) {
        data_021310a8 = 0;
        return;
    }
    data_021310a8 = 1;
    func_0205fe60(arg1, arg2);
}
