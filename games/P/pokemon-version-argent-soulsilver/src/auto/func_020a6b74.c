#include "m2c.h"

M2C_UNK func_020d1fa0();                            /* extern */
M2C_UNK func_020a5698(void *, M2C_UNK);             /* extern */
M2C_UNK func_020a56ac(void *, M2C_UNK);             /* extern */

void func_020a6b74(void *arg0) {
    u8 temp_r1;

    func_020d1fa0();
    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) (u8) (temp_r1 + 0xFD) <= 1U) {
        func_020a56ac(arg0, 0x19);
        M2C_FIELD(arg0, u8 *, 8) = 7U;
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    func_020a5698(arg0, 0x1A);
}
