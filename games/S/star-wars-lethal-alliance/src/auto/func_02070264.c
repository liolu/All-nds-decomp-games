#include "m2c.h"

M2C_UNK func_02065fa4(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02066320(s32, M2C_UNK);                /* extern */
M2C_UNK func_02067d48(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02069704(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_02070160();                                /* extern */
extern M2C_UNK data_020e8cc8;

s32 func_02070264(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02070160();
    if (temp_r0 == 0) {
        return 8;
    }
    func_02067d48(arg0, temp_r0, arg1);
    func_02066320(temp_r0, arg1);
    temp_r4 = func_02069704(0xA, temp_r0, 0);
    func_02065fa4(&data_020e8cc8, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
