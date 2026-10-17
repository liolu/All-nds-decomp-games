/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02033f80(void *, void *);                  /* extern */
M2C_UNK func_0203a3f0(void *);                      /* extern */
M2C_UNK func_0203ad14();                            /* extern */

s32 func_0203ad84(void *arg0, void *arg1) {
    s32 var_r3;

    var_r3 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x1E0) != 0xA) && (M2C_FIELD(arg1, s32 *, 4) == (M2C_FIELD(arg0, s32 *, 0x1E4) + 0x28))) {
        func_0203ad14(arg0);
        func_0203a3f0(arg0);
        var_r3 = 1;
    }
    if ((var_r3 != 0) || (func_02033f80(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}
