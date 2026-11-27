#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020448a0();                            /* extern */
s32 func_02057af0(s32, M2C_UNK);                    /* extern */

s32 func_020670ec(M2C_UNK arg0) {
    if (func_02057af0(func_02012a90(arg0, 1), 0) == 1) {
        func_020448a0();
    }
    return 1;
}
