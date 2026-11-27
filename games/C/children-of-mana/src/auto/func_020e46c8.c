/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02061e38(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern s32 data_0212e944;
extern M2C_UNK func_020e4cac;

s32 func_020e46c8(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02061e38(&func_020e4cac, 0, arg0, arg1, 0xFFFF, 4, 2) != 2) {
        data_0212e944 = 1;
        return 0;
    }
    return 1;
}
