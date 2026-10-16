/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207a5a4(s32, M2C_UNK);                /* extern */
s32 func_0207a600(s32, u16);                        /* extern */
s32 func_02077454(void *);                          /* extern */

s32 func_020775e0(void *arg0) {
    if (func_0207a600(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02077454(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0207a5a4(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
