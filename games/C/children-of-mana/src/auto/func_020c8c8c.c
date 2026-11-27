/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c8c8c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x1FC0) & 2) {
        return 1;
    }
    return 0;
}
