/* compiler: 2.0/sp1p5 -O1,p */
#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_0205365c();                                /* extern */
M2C_UNK func_02053694(s32, void *);                 /* extern */

void func_020530bc(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(8);
    if (var_r0 != 0) {
        var_r0 = func_0205365c();
    }
    M2C_FIELD(arg0, s32 *, 0xBB50) = var_r0;
    func_02053694(var_r0, arg0);
}
