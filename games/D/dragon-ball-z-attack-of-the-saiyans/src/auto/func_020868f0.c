#include "m2c.h"

s32 func_02086564();                         /* extern */
s32 func_02086988();                         /* extern */
M2C_UNK func_02086af0();                            /* extern */

void func_020868f0(M2C_UNK arg0) {
    if (func_02086988() != 0) {
        return;
    }
    do {

    } while (func_02086564(0) != 0);
    if (func_02086988(arg0) != 0) {
        return;
    }
    func_02086af0();
    if (func_02086988(arg0) != 0) {
        return;
    }
    do {
        func_02086564(1);
    } while (func_02086988(arg0) == 0);
}
