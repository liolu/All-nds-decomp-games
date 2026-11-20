#include "m2c.h"

M2C_UNK func_02034a20();                            /* extern */
s32 func_02061df4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02061d98(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02061df4(arg0, arg1, 0x20, 0x200);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02034a20();
    return 0;
}
