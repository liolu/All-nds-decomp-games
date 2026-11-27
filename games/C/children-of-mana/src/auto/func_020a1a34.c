/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02089430();                            /* extern */
s32 func_02091150();                                /* extern */
extern s32 data_02126ce4;

void func_020a1a34(void) {
    s32 var_r0;

    var_r0 = func_0200f270(0x18, 0);
    if (var_r0 != 0) {
        var_r0 = func_02091150();
    }
    data_02126ce4 = var_r0;
    func_02089430();
}
