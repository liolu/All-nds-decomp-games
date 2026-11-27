/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02001d2c(void *, s32, M2C_UNK);        /* extern */

void func_020aa660(void *arg0, s32 arg1) {
    func_02001cc8(arg0, 0, 0x23);
    func_02001d2c(arg0, arg1 + 4, 0x22);
    M2C_FIELD(arg0, s8 *, 0x22) = 0;
}
