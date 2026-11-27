/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c704();                            /* extern */
M2C_UNK func_020af550(void *, M2C_UNK);             /* extern */
M2C_UNK func_020d0038();                            /* extern */
s32 func_020d0be4();                                /* extern */

void func_020b21f8(void *arg0) {
    if (func_020d0be4() == 1) {
        func_0207c704();
        func_020af550(arg0, 4);
    } else {
        func_020d0038();
    }
    M2C_FIELD(arg0, s8 *, 0x19E) = 1;
}
