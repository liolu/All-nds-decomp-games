/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3184();                                /* extern */
M2C_UNK func_020c32a8(void *);                      /* extern */

s32 func_020c3134(void *arg0, s32 *arg1) {
    s32 var_r4;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, s16 *, 0x10) == 0) && (M2C_FIELD(arg0, s16 *, 0xE) == 0)) {
        if (arg1 != NULL) {
            *arg1 = func_020c3184(arg0);
        }
        var_r4 = 1;
    }
    func_020c32a8(arg0);
    return var_r4;
}
