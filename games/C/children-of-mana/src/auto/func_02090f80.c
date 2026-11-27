/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020597f8(M2C_UNK *, void *, s32);          /* extern */
extern M2C_UNK data_02126b90;

s32 func_02090f80(void *arg0) {
    u8 *temp_r1;
    u8 temp_r4;

    temp_r1 = M2C_FIELD(arg0, u8 **, 0);
    temp_r4 = *temp_r1;
    if (temp_r4 == func_020597f8(&data_02126b90, temp_r1 + 1, M2C_FIELD(arg0, s32 *, 4) - 1)) {
        return 1;
    }
    return 0;
}
