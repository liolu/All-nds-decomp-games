#include "m2c.h"

s32 func_020af570(s32);                             /* extern */
s32 func_020af594(s32);                             /* extern */

s32 func_0205382c(void **arg0) {
    if ((func_020af570(M2C_FIELD(*arg0, s32 *, 8)) != 0) && (func_020af594(M2C_FIELD(*arg0, s32 *, 0xC)) != 0)) {
        return 1;
    }
    return 0;
}
