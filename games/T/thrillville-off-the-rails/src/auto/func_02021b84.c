/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
s32 func_02024650();                                /* extern */
M2C_UNK func_02024664(s32);                         /* extern */
s32 func_020214d0(s16, void *);                     /* extern */

s32 func_02021b84(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_02024650();
    } else {
        var_r5 = func_02024624();
    }
    temp_r0 = func_020214d0(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        M2C_FIELD(arg1, s16 *, 4) = arg0;
    }
    if (arg3 != 0) {
        func_02024664(var_r5);
    } else {
        func_02024638(var_r5);
    }
    return temp_r0;
}
