#include "m2c.h"

s32 func_02049df8();                                /* extern */
M2C_UNK func_020a2fe4();                            /* extern */

void func_020a3a9c(void) {
    if (func_02049df8() == 0) {
        return;
    }
    func_020a2fe4();
}
