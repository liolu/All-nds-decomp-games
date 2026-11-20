#include "m2c.h"

s32 func_020b8094();                         /* extern */
s32 func_020b84b8();                         /* extern */
M2C_UNK func_020b8620();                            /* extern */

void func_020b8420(M2C_UNK arg0) {
    if (func_020b84b8() != 0) {
        return;
    }
    do {

    } while (func_020b8094(0) != 0);
    if (func_020b84b8(arg0) != 0) {
        return;
    }
    func_020b8620();
    if (func_020b84b8(arg0) != 0) {
        return;
    }
    do {
        func_020b8094(1);
    } while (func_020b84b8(arg0) == 0);
}
