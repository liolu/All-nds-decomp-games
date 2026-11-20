#include "m2c.h"

M2C_UNK func_020aa020();                         /* extern */
s32 func_020aa068();                             /* extern */
s32 *func_020aa070();                       /* extern */
M2C_UNK func_020a7f0c();                 /* extern */

void func_020a882c(void *arg0) {
    s32 var_r4;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    var_r4 = 0;
    if (func_020aa068() > 0) {
        do {
            func_020a7f0c(arg0, *func_020aa070(M2C_FIELD(arg0, s32 *, 8), var_r4));
            var_r4 += 1;
        } while (var_r4 < func_020aa068(M2C_FIELD(arg0, s32 *, 8)));
    }
    func_020aa020(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
