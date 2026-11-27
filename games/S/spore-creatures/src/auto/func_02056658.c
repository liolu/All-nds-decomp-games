#include "m2c.h"

s32 func_02046248();                                /* extern */
s32 func_02047354(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02056658(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02046248() == 0) {
        return 0;
    }
    return func_02047354(arg0 + 0x88, arg1, arg2);
}
