#include "m2c.h"

s32 func_02056fe0(s32);                             /* extern */

s32 func_020251f4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) + (func_02056fe0(M2C_FIELD(arg0, s32 *, 0)) * 3);
}
