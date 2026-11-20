/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020326d4(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xAC) != 0) || (M2C_FIELD(arg0, s32 *, 0x150) != 0)) {
        return 1;
    }
    return 0;
}
