/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02010c2c(void *, s32);                     /* extern */
M2C_UNK func_02010da8(void *, s32);                 /* extern */
M2C_UNK func_02012034();                            /* extern */
s32 func_020120d8(s32);                             /* extern */

s32 func_02011fec(void *arg0) {
    func_02010da8(arg0, func_02010c2c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020120d8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02012034();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
