/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024c74();                            /* extern */
s32 func_020252e4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020ec76c;
extern M2C_UNK func_02024c8c;

s32 func_020252a0(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020252e4(arg0, &func_02024c8c, 0);
    M2C_FIELD(&data_020ec76c, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02024c74();
    }
    return M2C_FIELD(&data_020ec76c, s32 *, 0x20);
}
