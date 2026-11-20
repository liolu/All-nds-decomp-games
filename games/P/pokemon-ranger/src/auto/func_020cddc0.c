/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cdc20();                            /* extern */
s32 func_020cde04(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020f8984;
extern M2C_UNK func_020cdc38;

s32 func_020cddc0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                               = func_020cde04(arg0, arg1, &func_020cdc38, 0);
    M2C_FIELD(&data_020f8984, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_020cdc20();
    }
    return M2C_FIELD(&data_020f8984, s32 *, 0xC);
}
