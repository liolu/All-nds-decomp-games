#include "m2c.h"

s32 func_0200ddf0(s32, u16);                        /* extern */
M2C_UNK func_0200dd94(s32, M2C_UNK);                /* extern */
s32 func_0207e1a4(void *);                          /* extern */

s32 func_0207e01c(void *arg0) {
    if (func_0200ddf0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_0207e1a4(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0200dd94(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
