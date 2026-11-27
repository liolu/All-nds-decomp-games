/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a621c();                            /* extern */

s32 func_020a6304(void *arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = 1;
    if ((u32) (u8) (arg1 + 0xFF) <= 1U) {
        switch (arg1) {                             /* irregular */
            case 2:
                M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) - 1);
                break;
            case 1:
                M2C_FIELD(arg0, s32 *, 0x114) = (s32) (M2C_FIELD(arg0, s32 *, 0x114) + 1);
                break;
        }
        var_r1 = M2C_FIELD(arg0, s32 *, 0x114);
        if (var_r1 < 0) {
            var_r1 = 1;
        } else if (var_r1 > 1) {
            var_r1 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x114) = var_r1;
        func_020a621c();
        var_r2 = 0;
    }
    return var_r2;
}
