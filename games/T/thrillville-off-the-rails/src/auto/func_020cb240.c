#include "m2c.h"

M2C_UNK func_020c6f98(void *, s32);                 /* extern */
M2C_UNK func_020c739c(void *);                      /* extern */

void func_020cb240(void *arg0) {
    s32 temp_r1;

    if (((u32) (M2C_FIELD(arg0, s32 *, 0xA4) << 0xE) >> 0x1A) != 0x21) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r1 <= 0) {
        return;
    }
    func_020c6f98(arg0, temp_r1 - 1);
    func_020c739c(arg0);
}
