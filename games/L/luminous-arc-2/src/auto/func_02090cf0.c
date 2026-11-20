#include "m2c.h"

s32 func_02083a48();                                /* extern */
s32 func_02085434(M2C_UNK);                         /* extern */
s32 func_020856b8(M2C_UNK);                         /* extern */
s32 func_02090ae4();                                /* extern */
s32 func_02090fd8(s32);                             /* extern */
s32 func_02091358(M2C_UNK);                         /* extern */
s32 func_02091774(M2C_UNK);                         /* extern */

s32 func_02090cf0(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    if ((func_02083a48() != 0) || ((arg1 == 1) && (func_02085434(arg0) == 0)) || (func_020856b8(arg0) == 0)) {
        return 0;
    }
    if (func_02091358(arg0) == 1) {
        return 0;
    }
    temp_r4 = func_02091774(arg0);
    if (temp_r4 < func_02090fd8(arg1)) {
        return 0;
    }
    if (func_02090ae4() != 0) {
        return 1;
    }
    return 0;
}
