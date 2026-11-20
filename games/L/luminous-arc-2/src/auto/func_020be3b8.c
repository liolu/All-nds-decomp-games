#include "m2c.h"

s32 func_020aa068(s32);                             /* extern */
s32 *func_020aa070(s32, s32);                       /* extern */
M2C_UNK func_020be04c(s32);                         /* extern */

void func_020be3b8(void *arg0) {
    s32 var_r4;

    var_r4 = func_020aa068(M2C_FIELD(arg0, s32 *, 0x10)) - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_020be04c(*func_020aa070(M2C_FIELD(arg0, s32 *, 0x10), var_r4));
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
