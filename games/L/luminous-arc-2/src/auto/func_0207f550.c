#include "m2c.h"

s32 func_0207f4b4(s32);                             /* extern */

s32 func_0207f550(void *arg0) {
    if ((func_0207f4b4(arg0 + 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0)) {
        return 1;
    }
    return 0;
}
