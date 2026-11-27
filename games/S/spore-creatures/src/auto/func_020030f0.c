#include "m2c.h"

M2C_UNK func_ov006_0215aa4c();                      /* extern */

s32 func_020030f0(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) - 1);
    if (M2C_FIELD(arg0, u16 *, 8) != 0) {
        return;
    }
    func_ov006_0215aa4c();
    return M2C_FIELD(arg0, s8 *, 0xA) = 0;
}
