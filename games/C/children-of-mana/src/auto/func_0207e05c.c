/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(s32, M2C_UNK, s32);           /* extern */
s32 func_0200f21c(s32, M2C_UNK);                    /* extern */

void func_0207e05c(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4                   = arg1 * 4;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_0200f21c(temp_r4, 0);
    func_02001cc8(M2C_FIELD(arg0, s32 *, 0), 0, temp_r4);
}
