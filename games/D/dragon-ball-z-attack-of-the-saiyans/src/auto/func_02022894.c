#include "m2c.h"

s32 func_0204fb04(M2C_UNK);                         /* extern */
s32 func_02053a7c();                                /* extern */
s32 func_02053d3c(M2C_UNK);                         /* extern */
s32 func_02055ab4(M2C_UNK);                         /* extern */
s32 func_02055b24(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02055c54(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02022894(M2C_UNK arg0) {
    if (func_02053a7c() == 0) {
        return 0;
    }
    if (func_02053d3c(arg0) == 0) {
        return 0;
    }
    if (func_0204fb04(arg0) != 0) {
        return 0;
    }
    if ((func_02055c54(arg0, 0) == 0xC) || (func_02055c54(arg0, 1) == 0xC) || (func_02055c54(arg0, 4) == 0xC) ||
        (func_02055c54(arg0, 5) == 0xC) || (func_02055c54(arg0, 6) == 0xC) || (func_02055c54(arg0, 8) == 0xC) ||
        (func_02055b24(arg0, 8) != 0) || (func_02055b24(arg0, 0x20) != 0) || (func_02055ab4(arg0) == 0xC)) {
        return 0;
    }
    return 1;
}
