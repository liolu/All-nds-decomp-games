/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020284c4(void *, M2C_UNK);                 /* extern */

s32 func_020211a8(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x13C) != 0) && (func_020284c4(arg0, 1) != 0)) {
        return 1;
    }
    return 0;
}
