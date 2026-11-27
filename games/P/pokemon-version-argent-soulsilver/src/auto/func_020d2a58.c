#include "m2c.h"

s32 func_020d2370();                                /* extern */
s32 func_020d2aec(M2C_UNK);                         /* extern */
s32 func_020d2bd0(M2C_UNK);                         /* extern */
M2C_UNK func_020d2c78(M2C_UNK, s32);                /* extern */
M2C_UNK func_020d2c8c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020d3190(s32);                         /* extern */
M2C_UNK func_020d3198(s32);                         /* extern */
extern M2C_UNK data_021e1918;

void func_020d2a58(void) {
    func_020d2c78(2, func_020d2aec(2));
    func_020d2c8c(2, func_020d2bd0(2));
    if ((M2C_FIELD(&data_021e1918, s32 *, 4) != 0) && ((func_020d2370() & 3) != 1)) {
        return;
    }
    func_020d3190(0x0200002B);
    func_020d3198(0x023E0021);
}
