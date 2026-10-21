#include "m2c.h"

M2C_UNK func_02076a68();                            /* extern */

void func_020757e0(void *arg0, u32 arg1) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 4);
    if (arg1 >= 0x40U) {
        M2C_FIELD(arg0, u8 *, 4) = (u8) (temp_r1 | 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 4) = (u8) (temp_r1 & ~1);
    func_02076a68();
}
