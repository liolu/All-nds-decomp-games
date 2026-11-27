/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204f230(s32, void *, void *, void *);     /* extern */
s32 func_0204f234(s32, void *, void *, void *);     /* extern */

s32 func_0204f50c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        var_r0 = func_0204f234(M2C_FIELD(arg0, s32 *, 0x2C), arg0 + 0x2C, arg0 + 0x34, arg0 + 0x38);
    } else {
        var_r0 = func_0204f230(M2C_FIELD(arg0, s32 *, 0x2C), arg0 + 0x2C, arg0 + 0x34, arg0 + 0x38);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = var_r0;
    return M2C_FIELD(arg0, s32 *, 0x30);
}
