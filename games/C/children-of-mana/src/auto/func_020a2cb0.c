/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5004(s32);                             /* extern */

s32 func_020a2cb0(void *arg0) {
    if (func_020a5004(M2C_FIELD(arg0, s32 *, 0x14)) > 3) {
        return 1;
    }
    return 0;
}
