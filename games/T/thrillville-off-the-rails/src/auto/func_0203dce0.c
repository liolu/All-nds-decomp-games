#include "m2c.h"

M2C_UNK func_0203dd20();                            /* extern */

void func_0203dce0(void *arg0) {
    s8 var_r0;
    u8 temp_r1;

    func_0203dd20();
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x2D);
    if (temp_r1 == M2C_FIELD(arg0, u8 *, 0x2E)) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x2F) = temp_r1;
    if (M2C_FIELD(arg0, u8 *, 0x2D) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x30) = var_r0;
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) M2C_FIELD(arg0, u8 *, 0x2D);
}
