#include "m2c.h"

M2C_UNK func_02012a90(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020578e0();                                /* extern */

s32 func_02067034(M2C_UNK arg0) {
    func_02012a90(arg0, 1);
    if (func_020578e0() != 0) {
        return 1;
    }
    return 0;
}
