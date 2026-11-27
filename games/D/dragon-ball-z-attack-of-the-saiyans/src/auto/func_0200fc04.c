#include "m2c.h"

u32 func_0200f988();                                /* extern */

u32 func_0200fc04(u32 arg0) {
    u32 var_r1;

    if (arg0 != 0) {
        var_r1 = func_0200f988() % arg0;
    } else {
        var_r1 = func_0200f988();
    }
    return var_r1;
}
