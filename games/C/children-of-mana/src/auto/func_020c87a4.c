/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bcb6c();                                /* extern */

s32 func_020c87a4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    return func_020bcb6c();
}
