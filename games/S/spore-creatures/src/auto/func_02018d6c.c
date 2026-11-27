#include "m2c.h"

s32 func_01ff801c();                                /* extern */
M2C_UNK func_020070c0(s32, s32);                    /* extern */

void func_02018d6c(s32 arg0) {
    func_020070c0(func_01ff801c(), arg0 + 0x14);
}
