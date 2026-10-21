#include "m2c.h"

M2C_UNK func_02005204();                            /* extern */
M2C_UNK func_02097800(void *, M2C_UNK);             /* extern */
M2C_UNK func_02097814(void *, M2C_UNK);             /* extern */

void func_02098c14(void *arg0) {
    u8 temp_r1;

    func_02005204();
    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) (u8) (temp_r1 + 0xFD) <= 1U) {
        func_02097814(arg0, 0x19);
        M2C_FIELD(arg0, u8 *, 8) = 7U;
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    func_02097800(arg0, 0x1A);
}
