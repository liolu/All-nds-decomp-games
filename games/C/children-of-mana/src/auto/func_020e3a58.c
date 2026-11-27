/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e3ae0();                                /* extern */

u16 func_020e3a58(void *arg0) {
    if (func_020e3ae0() != 0) {
        return M2C_FIELD(arg0, u16 *, 0x36);
    }
    return 0U;
}
