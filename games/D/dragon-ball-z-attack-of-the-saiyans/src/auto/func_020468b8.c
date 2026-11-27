#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0202c0f8(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK data_0209f7a8;

s32 func_020468b8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02012a90(arg0, 1);
    func_0202c0f8(&data_0209f7a8, temp_r4, func_02012a90(arg0, 2));
    return 1;
}
