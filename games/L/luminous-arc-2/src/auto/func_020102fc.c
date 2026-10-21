#include "m2c.h"

M2C_UNK func_02005638(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02005ac8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200766c(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_02008e50(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020101f8();                                /* extern */
extern M2C_UNK data_0214a2a8;

s32 func_020102fc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020101f8();
    if (temp_r0 == 0) {
        return 8;
    }
    func_0200766c(arg0, temp_r0, arg1);
    func_02005ac8(temp_r0, arg1);
    temp_r4 = func_02008e50(0xA, temp_r0, 0);
    func_02005638(&data_0214a2a8, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
