/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020284c4(void *, M2C_UNK);                 /* extern */

s32 func_02021128(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x144) != 0) && (func_020284c4(arg0, 4) != 0)) {
        return 1;
    }
    return 0;
}
