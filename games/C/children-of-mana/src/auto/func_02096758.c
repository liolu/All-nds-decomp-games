/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020965bc();                                /* extern */
extern s32 data_02126ce0;

void func_02096758(void) {
    s32 var_r0;

    var_r0 = func_0200f270(0x158, 0);
    if (var_r0 != 0) {
        var_r0 = func_020965bc();
    }
    data_02126ce0 = var_r0;
}
