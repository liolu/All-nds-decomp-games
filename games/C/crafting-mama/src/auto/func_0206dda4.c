#include "m2c.h"

void *func_0206dd28(M2C_UNK, u16);                  /* extern */
M2C_UNK func_0206de3c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0206dda4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, u16 arg6) {
    void *temp_r0;

    temp_r0                         = func_0206dd28(arg0, arg6);
    M2C_FIELD(temp_r0, s32 *, 0x30) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x44) = arg4;
    func_0206de3c(temp_r0, arg1, arg2, arg3);
}
