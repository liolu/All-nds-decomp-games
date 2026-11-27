/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_0207e09c(void *);                      /* extern */

void *func_0207e124(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        func_02013e98(func_020114e4(), temp_r4);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    func_0207e09c(arg0);
    return arg0;
}
