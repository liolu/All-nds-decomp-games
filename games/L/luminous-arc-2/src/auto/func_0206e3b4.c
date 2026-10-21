#include "m2c.h"

M2C_UNK func_0206cf80(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0206ee30();                                /* extern */
M2C_UNK func_0206ef94();                            /* extern */

s32 func_0206e3b4(s32 arg0) {
    if (func_0206ee30() == 0) {
        func_0206cf80(-0x42, arg0, 0);
        return -0x42;
    }
    func_0206ef94();
    return arg0;
}
