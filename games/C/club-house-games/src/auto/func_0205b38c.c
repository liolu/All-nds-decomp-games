#include "m2c.h"

M2C_UNK func_0205a87c();                            /* extern */

void func_0205b38c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_0205a87c();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
