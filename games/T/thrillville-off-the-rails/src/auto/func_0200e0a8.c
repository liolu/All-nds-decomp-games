#include "m2c.h"

s32 func_02011b10();                                /* extern */
M2C_UNK func_02011c50(M2C_UNK);                     /* extern */

s32 func_0200e0a8(M2C_UNK arg0) {
    if (func_02011b10() == 0) {
        return 0;
    }
    func_02011c50(arg0);
    return 1;
}
