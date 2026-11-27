/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206b4ec(s16, void *);                     /* extern */
s32 _ZN3IRQ7DisableEv();                                /* extern */
M2C_UNK _ZN3IRQ7RestoreEj(s32);                         /* extern */
s32 func_0206abbc();                                /* extern */
M2C_UNK func_0206abd0(s32);                         /* extern */

s32 func_02069528(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_0206abbc();
    } else {
        var_r5 = _ZN3IRQ7DisableEv();
    }
    temp_r0 = func_0206b4ec(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        M2C_FIELD(arg1, s16 *, 4) = arg0;
    }
    if (arg3 != 0) {
        func_0206abd0(var_r5);
    } else {
        _ZN3IRQ7RestoreEj(var_r5);
    }
    return temp_r0;
}
