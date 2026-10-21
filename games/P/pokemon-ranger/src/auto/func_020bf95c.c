/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdd44(M2C_UNK);                         /* extern */
M2C_UNK func_020c88d0(s32, void *, M2C_UNK);        /* extern */

s32 func_020bf95c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0xA0) = func_020bdd44(arg1);
    func_020c88d0(M2C_FIELD(arg0, s32 *, 0xA0), arg0 + 0xA4, 0x40);
    return 1;
}
