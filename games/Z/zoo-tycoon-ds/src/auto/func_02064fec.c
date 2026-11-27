/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063480(s32, M2C_UNK);                /* extern */
s32 func_020634dc(s32, u16);                        /* extern */
s32 func_02064f1c(void *);                          /* extern */

s32 func_02064fec(void *arg0) {
    if (func_020634dc(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02064f1c(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02063480(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
