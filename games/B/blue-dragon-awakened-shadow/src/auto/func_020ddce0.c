/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020d856c(s32);                         /* extern */
M2C_UNK func_020dde58(void *);                      /* extern */

void *func_020ddce0(void *arg0) {
    s32 var_r2;
    void *temp_r0;

    func_020d856c(arg0 + 8);
    var_r2                        = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    do {
        temp_r0 = arg0 + (var_r2 << 6);
        var_r2 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x94) = 0;
    } while (var_r2 < 6);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    func_020dde58(arg0);
    return arg0;
}
