#include "m2c.h"

s32 func_0200774c();                         /* extern */
s32 func_02007b70();                         /* extern */
M2C_UNK func_02007cd8();                            /* extern */

void func_02007ad8(M2C_UNK arg0) {
    if (func_02007b70() != 0) {
        return;
    }
    do {

    } while (func_0200774c(0) != 0);
    if (func_02007b70(arg0) != 0) {
        return;
    }
    func_02007cd8();
    if (func_02007b70(arg0) != 0) {
        return;
    }
    do {
        func_0200774c(1);
    } while (func_02007b70(arg0) == 0);
}
