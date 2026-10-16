/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020683d0(s32, M2C_UNK);                /* extern */
extern s32 data_020ea69c;

s32 func_02075370(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020ea69c) {
        return 0;
    }
    func_020683d0(arg0, 0);
    data_020ea69c |= arg0;
    return 1;
}
