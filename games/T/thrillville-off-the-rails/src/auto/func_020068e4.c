#include "m2c.h"

M2C_UNK func_02086110(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_020743dc(M2C_UNK);                         /* extern */
extern M2C_UNK data_020e90d4;

s32 func_020068e4(void) {
    s32 temp_r0;

    temp_r0 = func_020743dc(0x84);
    func_02086110(temp_r0, &data_020e90d4, 0x84);
    return temp_r0;
}
