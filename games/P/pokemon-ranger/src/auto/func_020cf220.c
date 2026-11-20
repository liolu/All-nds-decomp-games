/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cebe4();                            /* extern */
s32 func_020cf264(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020f8a00;
extern M2C_UNK func_020cebfc;

s32 func_020cf220(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_020cf264(arg0, arg1, &func_020cebfc, 0);
    M2C_FIELD(&data_020f8a00, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_020cebe4();
    }
    return M2C_FIELD(&data_020f8a00, s32 *, 0x20);
}
