#include "m2c.h"

M2C_UNK func_020470ac(void *, M2C_UNK);             /* extern */

void func_0204ceb4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((M2C_FIELD(arg0, s32 *, 0x70) & ~2) | (arg1 * 2));
    if (arg1 != 0) {
        return;
    }
    func_020470ac(arg0 + 0x88, 0xA);
}
