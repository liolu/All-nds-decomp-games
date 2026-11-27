#include "m2c.h"

M2C_UNK _Z15CleanCacheRangePKvj(M2C_UNK *, u32);              /* extern */
M2C_UNK func_020d47b8(s32, M2C_UNK *, u32);         /* extern */
M2C_UNK func_020de4c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de538(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32); /* extern */
s32 func_020de6c8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_021e4ce0;

s32 func_020e0d8c(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020de6c8(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    func_020d47b8(arg1, &data_021e4ce0, arg2);
    _Z15CleanCacheRangePKvj(&data_021e4ce0, arg2);
    func_020de4c8(0x18, arg0);
    var_r0 = func_020de538(0x18, 5, &data_021e4ce0, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
