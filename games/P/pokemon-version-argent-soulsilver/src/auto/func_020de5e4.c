#include "m2c.h"

M2C_UNK func_020d23b0(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK _Z15CleanCacheRangePKvj(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d4a50(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020d66c4(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020de4e0();                                /* extern */
extern M2C_UNK data_021e4248;

s32 func_020de5e4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020de4e0();
    if (temp_r0 == 0) {
        return 8;
    }
    func_020d4a50(arg0, temp_r0, arg1);
    _Z15CleanCacheRangePKvj(temp_r0, arg1);
    temp_r4 = func_020d66c4(0xA, temp_r0, 0);
    func_020d23b0(&data_021e4248, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}
