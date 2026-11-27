/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207ded4(void *);                          /* extern */

s32 func_02029a2c(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0x628) == M2C_FIELD(arg0, u16 *, 0x612)) && (func_0207ded4(arg0 + 0x50) == 0)) {
        return 1;
    }
    return 0;
}
