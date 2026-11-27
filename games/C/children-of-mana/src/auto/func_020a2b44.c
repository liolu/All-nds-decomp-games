/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020a2b44(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        M2C_FIELD(arg0, s32 *, 4)    = 4;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
}
