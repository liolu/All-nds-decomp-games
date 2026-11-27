#include "m2c.h"

u16 *func_0208c4e8();                               /* extern */
u32 func_0208d840(M2C_UNK, s32, s32, s32);          /* extern */

u32 func_0208d8b4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_r4;
    s32 var_r5;
    u32 var_r0;

    var_r0 = (u32) (*func_0208c4e8() << 0x18) >> 0x1F;
    if (var_r0 != 0) {
        return var_r0;
    }
    var_r4 = 0;
    if (arg3 <= 0) {
        return var_r0;
    }
    do {
        var_r5 = 0;
        if (arg4 > 0) {
            do {
                var_r0 = func_0208d840(arg0, arg1 + var_r4, arg2 + var_r5, arg5);
                var_r5 += 1;
            } while (var_r5 < arg4);
        }
        var_r4 += 1;
    } while (var_r4 < arg3);
    return var_r0;
}
