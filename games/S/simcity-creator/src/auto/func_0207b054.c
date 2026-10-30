#include "m2c.h"

s32 func_02070ad8();                                /* extern */
s32 func_02073448(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0207b054(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02070ad8() != 1) {
        return 0;
    }
    return func_02073448(arg0, arg1, arg2);
}
