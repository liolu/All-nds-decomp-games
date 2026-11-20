#include "m2c.h"

M2C_UNK func_0207947c();                            /* extern */

void func_0207a330(void *arg0) {
    s32 temp_r0;

    func_0207947c();
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 & 4) {
        M2C_FIELD(arg0, u8 *, 0x779) = (u8) (M2C_FIELD(arg0, u8 *, 0x779) + 1);
        return;
    }
    if (!(temp_r0 & 1)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (temp_r0 & ~4);
    M2C_FIELD(arg0, u8 *, 0x779) = (u8) (M2C_FIELD(arg0, u8 *, 0x779) + 1);
}
