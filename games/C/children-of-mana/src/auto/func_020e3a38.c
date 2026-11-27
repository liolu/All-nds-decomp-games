/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e3ae0();                                /* extern */

s32 func_020e3a38(void *arg0) {
    if (func_020e3ae0() != 0) {
        return M2C_FIELD(arg0, s32 *, 0x38);
    }
    return 0;
}
