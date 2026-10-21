#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0201037c();                                /* extern */
s32 func_020103e0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02010820();                            /* extern */
extern M2C_UNK data_0214a2a0;

s32 func_02010170(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02006be0();
    if (func_0201037c() != 0) {
        func_02006bf4(temp_r4);
        return 3;
    }
    temp_r0 = func_020103e0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02010820();
    func_02008de0(0xA, 0);
    M2C_FIELD(&data_0214a2a0, s32 *, 4) = 0;
    M2C_FIELD(&data_0214a2a0, s16 *, 0) = 0;
    func_02006bf4(temp_r4);
    return 0;
}
