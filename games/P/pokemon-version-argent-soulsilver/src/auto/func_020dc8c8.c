#include "m2c.h"

s32 func_020dc8b8();                                /* extern */
M2C_UNK func_020d3f48();                            /* extern */

void func_020dc8c8(void) {
    if (func_020dc8b8() != 0) {
        return;
    }
    func_020d3f48();
}
