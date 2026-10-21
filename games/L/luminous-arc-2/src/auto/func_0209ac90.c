#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_020075b0(s32, M2C_UNK, s32);           /* extern */
s32 func_0209acf8();                                /* extern */
M2C_UNK func_0209ada0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0209c944(s32);                         /* extern */
extern void *data_0211d7ec;

s32 func_0209ac90(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;

    temp_r4 = func_0209acf8();
    temp_r6 = func_02006be0();
    temp_r0 = M2C_FIELD(data_0211d7ec, s32(**)(s32), 0x18)(temp_r4);
    if (temp_r0 != 0) {
        func_020075b0(temp_r0, 0, temp_r4);
        func_0209ada0(temp_r0, arg0);
        func_0209c944(temp_r0);
    }
    func_02006bf4(temp_r6);
    return temp_r0;
}
