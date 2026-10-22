/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffb0f0();                                /* extern */

s32 func_0202ad1c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) > func_01ffb0f0()) {
        return 1;
    }
    return 0;
}
