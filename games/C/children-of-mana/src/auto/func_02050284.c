/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02050414();                                /* extern */
M2C_UNK func_02050894(s32 *, M2C_UNK, s32, M2C_UNK); /* extern */

s32 func_02050284(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;
    s32 var_r4;

    var_r4 = 0;
    if (func_02050414() != 0) {
        func_02050894(&sp0, 0, arg0, arg1);
        switch (arg0) {                             /* irregular */
            case 4:
                var_r4 = 1;
                break;
            case 2:
                if (M2C_FIELD((sp0 + (arg2 * 4)), s32 *, 0x14) != 0) {
                    var_r4 = 1;
                }
                break;
            case 3:
                if (M2C_FIELD((sp0 + (arg2 * 4)), s32 *, 0x14) != 0) {
                    var_r4 = 1;
                }
                break;
        }
    }
    return var_r4;
}
