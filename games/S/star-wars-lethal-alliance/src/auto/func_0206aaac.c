/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02069958(void *, s32);                     /* extern */
M2C_UNK func_02069ad4(void *, s32);                 /* extern */
M2C_UNK func_0206aaf4();                            /* extern */
s32 func_0206ab98(s32);                             /* extern */

s32 func_0206aaac(void *arg0) {
    func_02069ad4(arg0, func_02069958(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0206ab98(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0206aaf4();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
