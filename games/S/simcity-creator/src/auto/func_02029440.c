#include "m2c.h"

s32 func_02009960();                                /* extern */
M2C_UNK func_0200986c(M2C_UNK);                     /* extern */

s32 func_02029440(M2C_UNK arg0) {
    if (func_02009960() == 0) {
        return 0;
    }
    func_0200986c(arg0);
    return 1;
}
