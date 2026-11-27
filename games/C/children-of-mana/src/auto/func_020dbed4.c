/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020dbed4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 3) {
        M2C_FIELD(arg0, s32 *, 4)   = 2;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
