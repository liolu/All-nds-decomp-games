/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02053bb4(s32);                         /* extern */
extern M2C_UNK data_020d8a74;
extern M2C_UNK data_020d8bd4;

M2C_UNK *func_02053b2c(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_020d8a74, s32 *, 0xFC) & 8;
    if (temp_r0 == 0) {
        func_02053bb4(temp_r0);
        M2C_FIELD(&data_020d8a74, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020d8a74, s32 *, 0xFC) | 8);
    }
    return &data_020d8bd4;
}
