#include "m2c.h"

s32 func_02061c38(s32);                             /* extern */
s32 func_020622e4(s32, s32);                        /* extern */

s32 func_02054294(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x9C) = func_02061c38(M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x98) = func_020622e4(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x9C));
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    return M2C_FIELD(arg0, s32 *, 0x98);
}
