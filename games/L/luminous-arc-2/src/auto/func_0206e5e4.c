#include "m2c.h"

M2C_UNK func_0206cf80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0206ebdc(s32, M2C_UNK);                /* extern */
s32 func_0206ee30();                                /* extern */

s32 func_0206e5e4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0206ee30();
    if (temp_r0 == 0) {
        func_0206cf80(-0x42, arg0, 0);
        return -0x42;
    }
    func_0206ebdc(temp_r0, arg1);
    return 0;
}
