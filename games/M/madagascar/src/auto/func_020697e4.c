/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206919c();                            /* extern */
s32 func_02069828(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020dd7c0;
extern M2C_UNK func_020691b4;

s32 func_020697e4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02069828(arg0, &func_020691b4, 0);
    M2C_FIELD(&data_020dd7c0, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_0206919c();
    }
    return M2C_FIELD(&data_020dd7c0, s32 *, 0x20);
}
