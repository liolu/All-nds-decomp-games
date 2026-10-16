#include "m2c.h"

s32 func_02065ba4();                         /* extern */
s32 func_02065fc8();                         /* extern */
M2C_UNK func_02066130();                            /* extern */

void func_02065f30(M2C_UNK arg0) {
    if (func_02065fc8() != 0) {
        return;
    }
    do {

    } while (func_02065ba4(0) != 0);
    if (func_02065fc8(arg0) != 0) {
        return;
    }
    func_02066130();
    if (func_02065fc8(arg0) != 0) {
        return;
    }
    do {
        func_02065ba4(1);
    } while (func_02065fc8(arg0) == 0);
}
