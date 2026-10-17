/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_02001348();                             /* extern */

s32 func_020058c4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x18) >= func_02001348(arg0 + 0x20)) {
        return 1;
    }
    return 0;
}
