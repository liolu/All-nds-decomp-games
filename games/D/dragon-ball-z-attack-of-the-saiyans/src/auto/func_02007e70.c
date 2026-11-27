#include "m2c.h"

s32 func_02007ed8(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020080b0(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern s32 data_020a0130;
extern M2C_UNK data_020a0134;

void func_02007e70(M2C_UNK arg0) {
    if (func_02007ed8(&data_020a0134, arg0) != 0) {
        return;
    }
    func_020080b0(&data_020a0134, 0x0226E000, 0x4000);
    data_020a0130 = 0x0226E000;
}
