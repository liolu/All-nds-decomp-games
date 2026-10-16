/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204b1e8();                            /* extern */
s32 func_0204b874(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020b1ee4;
extern M2C_UNK func_0204b200;

s32 func_0204b830(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_0204b874(arg0, &func_0204b200, 0);
    M2C_FIELD(&data_020b1ee4, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_0204b1e8();
    }
    return M2C_FIELD(&data_020b1ee4, s32 *, 0x20);
}
