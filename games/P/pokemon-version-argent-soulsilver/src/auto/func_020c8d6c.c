#include "m2c.h"

M2C_UNK func_020c8df4();                            /* extern */

void func_020c8d6c(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020c8df4(arg0);
}
