/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0206cf80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
void *func_02070fc8();                              /* extern */

s32 func_0207077c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_02070fc8();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x1F0) = arg1;
        M2C_FIELD(temp_r0, s32 *, 0x1F4) = arg2;
        return 0;
    }
    func_0206cf80(-0x40, arg0, 0);
    return -0x40;
}
