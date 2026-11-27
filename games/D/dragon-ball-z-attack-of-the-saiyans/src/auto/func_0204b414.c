#include "m2c.h"

s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020370e4();                            /* extern */
M2C_UNK func_02037164();                            /* extern */

s32 func_0204b414(M2C_UNK arg0) {
    if (func_02012b7c(arg0, 1, 0) == 0) {
        func_020370e4();
    } else {
        func_02037164();
    }
    return 1;
}
