#include "m2c.h"

M2C_UNK func_02076e34(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_02077048(M2C_UNK, s32);                /* extern */
s32 func_020772bc(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_020f0130;

s32 func_02056cd4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = func_020772bc(&data_020f0130, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02076e34(temp_r0, arg2, arg3, arg4);
    func_02077048(arg1, temp_r0);
    return temp_r0;
}
