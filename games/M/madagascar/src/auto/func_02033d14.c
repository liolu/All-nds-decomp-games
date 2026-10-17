/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b040();                            /* extern */

void func_02033d14(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x1BC) != 0) {
        func_0207b040();
    }
    M2C_FIELD(arg0, s32 *, 0x1BC) = arg1;
}
