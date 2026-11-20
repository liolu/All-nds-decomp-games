/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206690c(void *, s32);                     /* extern */
M2C_UNK func_02066ab0(void *, s32);                 /* extern */
M2C_UNK func_02066fe8();                            /* extern */
s32 func_02067088(s32);                             /* extern */

s32 func_02066fa0(void *arg0) {
    func_02066ab0(arg0, func_0206690c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02067088(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02066fe8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
