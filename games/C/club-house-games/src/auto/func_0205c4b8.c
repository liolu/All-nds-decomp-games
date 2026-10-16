#include "m2c.h"

s32 func_0205870c(s32, u16);                        /* extern */
M2C_UNK func_020586b0(s32, M2C_UNK);                /* extern */
s32 func_0205c304(void *);                          /* extern */

s32 func_0205c4b8(void *arg0) {
    if (func_0205870c(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_0205c304(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_020586b0(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
