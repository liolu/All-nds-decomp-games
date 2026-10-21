/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc498(s32, M2C_UNK);                /* extern */
s32 func_020bc4f4(s32, u16);                        /* extern */
s32 func_020be470(void *);                          /* extern */

s32 func_020be5fc(void *arg0) {
    if (func_020bc4f4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_020be470(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_020bc498(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
