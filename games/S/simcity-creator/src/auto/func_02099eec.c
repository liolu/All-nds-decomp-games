#include "m2c.h"

s32 func_02054880(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020705d4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02070668(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02070b84(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02072934(M2C_UNK);                         /* extern */

s32 func_02099eec(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if ((func_020705d4(arg1, arg2, arg3) != 0) || (func_02070668(arg1, arg2, arg3) != 1) ||
        (func_02070b84(arg1, arg2, arg3) != 0) || (func_02054880(func_02072934(arg1), arg2, arg3) != 0)) {
        return 0;
    }
    return 1;
}
