/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020326fc(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xB4) != 0) || (M2C_FIELD(arg0, s32 *, 0x158) != 0)) {
        return 1;
    }
    return 0;
}
