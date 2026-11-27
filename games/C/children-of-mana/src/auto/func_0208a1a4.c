/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02089f44(s32, s32);                    /* extern */
M2C_UNK func_02089f58(s32, s32);                    /* extern */
M2C_UNK func_02089f6c(s32);                         /* extern */
M2C_UNK func_02089f9c(s32, s32);                    /* extern */
M2C_UNK func_0208a100();                            /* extern */

s32 func_0208a1a4(s32 arg0) {
    s32 var_r4;

    func_0208a100();
    var_r4 = 0;
    do {
        func_02089f9c(arg0, var_r4);
        func_02089f58(arg0, var_r4);
        func_02089f44(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 8);
    func_02089f6c(arg0);
    return arg0;
}
