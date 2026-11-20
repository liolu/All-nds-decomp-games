/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204fca8(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0204f61c();                            /* extern */
extern M2C_UNK data_0206d9e0;
extern M2C_UNK func_0204f634;

s32 func_0204fc64(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                              = func_0204fca8(arg0, &func_0204f634, 0);
    M2C_FIELD(&data_0206d9e0, s32 *, 32) = temp_r0;
    if (temp_r0 == 0) {
        func_0204f61c();
    }
    return M2C_FIELD(&data_0206d9e0, s32 *, 32);
}
