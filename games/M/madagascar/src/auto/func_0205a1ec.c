/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064f14(s32, M2C_UNK);                /* extern */
extern s32 data_020da05c;

s32 func_0205a1ec(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020da05c) {
        return 0;
    }
    func_02064f14(arg0, 0);
    data_020da05c |= arg0;
    return 1;
}
