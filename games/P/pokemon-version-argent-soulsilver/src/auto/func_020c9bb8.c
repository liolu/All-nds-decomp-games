#include "m2c.h"

s32 func_020b57d0(s32, u16);                        /* extern */
M2C_UNK func_020b5820(s32, M2C_UNK);                /* extern */
s32 func_020c9d50(void *);                          /* extern */

s32 func_020c9bb8(void *arg0) {
    if (func_020b57d0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_020c9d50(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_020b5820(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
