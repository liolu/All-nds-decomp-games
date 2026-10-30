#include "m2c.h"

M2C_UNK func_02088648(M2C_UNK, s32);                /* extern */

s32 func_02088604(void *arg0, M2C_UNK arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 == 0) {
        return 0;
    }
    func_02088648(arg1, M2C_FIELD(arg0, s32 *, 0) + ((temp_r2 - 1) * 0x10));
    return 1;
}
