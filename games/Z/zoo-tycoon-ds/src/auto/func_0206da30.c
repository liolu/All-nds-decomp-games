/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206d39c(void *, s32);                     /* extern */
M2C_UNK func_0206d540(void *, s32);                 /* extern */
M2C_UNK func_0206da78();                            /* extern */
s32 func_0206db18(s32);                             /* extern */

s32 func_0206da30(void *arg0) {
    func_0206d540(arg0, func_0206d39c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0206db18(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0206da78();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
