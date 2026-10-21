#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_020ba500(M2C_UNK, s32);                    /* extern */
M2C_UNK func_020ba560(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0212ece8;

void func_020ba694(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp4[64];

    func_02004978(sp4, &data_0212ece8, arg1, func_020ba500(arg0, arg4));
    func_020ba560(arg0, sp4, arg2, arg3, arg4);
}
