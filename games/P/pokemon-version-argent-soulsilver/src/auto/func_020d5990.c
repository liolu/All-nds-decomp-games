#include "m2c.h"

s32 func_020d5604();                         /* extern */
s32 func_020d5a28();                         /* extern */
M2C_UNK func_020d5b90();                            /* extern */

void func_020d5990(M2C_UNK arg0) {
    if (func_020d5a28() != 0) {
        return;
    }
    do {

    } while (func_020d5604(0) != 0);
    if (func_020d5a28(arg0) != 0) {
        return;
    }
    func_020d5b90();
    if (func_020d5a28(arg0) != 0) {
        return;
    }
    do {
        func_020d5604(1);
    } while (func_020d5a28(arg0) == 0);
}
