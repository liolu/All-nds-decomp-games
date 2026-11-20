/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02017bfc();                                /* extern */
M2C_UNK func_02038668();                            /* extern */
M2C_UNK func_020386c4(s32, s32);                    /* extern */
s32 func_02038c6c();                                /* extern */

void func_0200f1b0(void) {
    s32 temp_r4;

    temp_r4 = func_02038c6c();
    func_020386c4(temp_r4, func_02017bfc());
    func_02038c6c();
    func_02038668();
}
