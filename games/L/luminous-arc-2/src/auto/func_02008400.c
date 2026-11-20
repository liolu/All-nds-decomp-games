#include "m2c.h"

s32 func_02008074();                         /* extern */
s32 func_02008498();                         /* extern */
M2C_UNK func_02008600();                            /* extern */

void func_02008400(M2C_UNK arg0) {
    if (func_02008498() != 0) {
        return;
    }
    do {

    } while (func_02008074(0) != 0);
    if (func_02008498(arg0) != 0) {
        return;
    }
    func_02008600();
    if (func_02008498(arg0) != 0) {
        return;
    }
    do {
        func_02008074(1);
    } while (func_02008498(arg0) == 0);
}
