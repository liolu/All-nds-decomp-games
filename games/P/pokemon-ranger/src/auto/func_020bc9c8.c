/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8e44(s32, M2C_UNK);                /* extern */
extern s32 data_020f5054;

s32 func_020bc9c8(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020f5054) {
        return 0;
    }
    func_020c8e44(arg0, 0);
    data_020f5054 |= arg0;
    return 1;
}
