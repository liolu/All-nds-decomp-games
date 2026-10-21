#include "m2c.h"

M2C_UNK func_02076e74(void *);                      /* extern */

void *func_02074aa4(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    if (temp_r0 != 0xFF) {
        M2C_FIELD(arg3, u8 *, 0x72) = temp_r0;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
    if (temp_r0_2 != 0xFF) {
        M2C_FIELD(arg3, u8 *, 0x73) = temp_r0_2;
    }
    func_02076e74(arg3 + 0x68);
    return arg0 + 2;
}
