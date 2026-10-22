/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014be0(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_0215b3d4;

s32 func_0202324c(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_0215b3d4, s32 *, 0x54) == 1) {
        if (func_02014be0(&data_0215b3d4, 3) >= 0x3E8) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (func_02014be0(&data_0215b3d4, 3) >= 0x7D0) {
        return 1;
    }
    return 0;
}
