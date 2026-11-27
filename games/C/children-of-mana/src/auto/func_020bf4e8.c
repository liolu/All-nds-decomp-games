/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */

void *func_020bf4e8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return arg0;
}
