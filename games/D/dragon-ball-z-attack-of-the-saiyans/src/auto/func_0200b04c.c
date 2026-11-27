#include "m2c.h"

M2C_UNK func_020828bc();                            /* extern */
M2C_UNK func_02082918(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02082a58();                            /* extern */
M2C_UNK func_02082aa4();                            /* extern */
M2C_UNK func_02082ad8(s32, s32, s32);               /* extern */
M2C_UNK func_02082b44();                            /* extern */

s32 func_0200b04c(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg1 != 0) {
        func_020828bc();
        func_02082918(arg1, arg0 * 8, arg2);
        func_02082a58();
    }
    if (arg4 != 0) {
        func_02082aa4();
        func_02082ad8(arg4, arg3 * 8, arg5);
        func_02082b44();
    }
    return 0;
}
