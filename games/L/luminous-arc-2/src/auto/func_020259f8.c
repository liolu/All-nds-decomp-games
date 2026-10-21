#include "m2c.h"

M2C_UNK func_02025150();                            /* extern */

void func_020259f8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_02025150();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
