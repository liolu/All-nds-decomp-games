/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */

void func_020316c4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
