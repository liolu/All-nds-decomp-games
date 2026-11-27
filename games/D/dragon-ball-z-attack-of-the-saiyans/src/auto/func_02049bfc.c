#include "m2c.h"

M2C_UNK func_02012a90(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0204934c();                                /* extern */
s32 func_020546b0();                                /* extern */

s32 func_02049bfc(M2C_UNK arg0) {
    func_02012a90(arg0, 1);
    if (func_0204934c() == 0xFF) {
        return -1;
    }
    return func_020546b0();
}
