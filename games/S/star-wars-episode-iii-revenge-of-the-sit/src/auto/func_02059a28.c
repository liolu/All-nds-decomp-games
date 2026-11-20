/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0205c1c4(s32, M2C_UNK);                /* extern */
s32 func_0205c220(s32, u16);                        /* extern */
s32 func_020598b0(void *);                          /* extern */

s32 func_02059a28(void *arg0) {
    if (func_0205c220(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_020598b0(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0205c1c4(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
