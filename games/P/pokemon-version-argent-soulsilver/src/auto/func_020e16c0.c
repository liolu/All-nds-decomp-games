#include "m2c.h"

M2C_UNK func_020d3f48();                            /* extern */
s32 func_020e1018();                                /* extern */
s32 func_020e1668();                                /* extern */

void func_020e16c0(void) {
    if (func_020e1018() != 0) {
        return;
    }
    if (func_020e1668() != 0) {
        return;
    }
    func_020d3f48();
}
