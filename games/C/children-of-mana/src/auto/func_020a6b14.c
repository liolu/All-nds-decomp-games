/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209c898(void *);                          /* extern */
s32 func_0209fe74(s32);                             /* extern */

s32 func_020a6b14(void *arg0) {
    if ((func_0209fe74(M2C_FIELD(arg0, s32 *, 0x194)) != 0) && (func_0209c898(arg0) != 0)) {
        return 1;
    }
    return 0;
}
