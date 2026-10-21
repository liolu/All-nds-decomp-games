#include "m2c.h"

s32 func_02057718(u16, u8);                         /* extern */
extern M2C_UNK data_0208dc40;

s32 func_0205f6c0(s32 arg0) {
    s32 temp_r1;

    if ((arg0 <= 0) || (arg0 >= 0x10A)) {
        return 0;
    }
    temp_r1 = (arg0 * 0xA) + (s32) &data_0208dc40;
    return func_02057718(M2C_FIELD(temp_r1, u16 *, 2), M2C_FIELD(temp_r1, u8 *, 6));
}
