#include "m2c.h"

s32 func_0201fd08(s32, u16);                        /* extern */
M2C_UNK func_0201fd58(s32, M2C_UNK);                /* extern */
s32 func_0202f960(void *);                          /* extern */

s32 func_0202f7f0(void *arg0) {
    if (func_0201fd08(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_0202f960(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0201fd58(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
