/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001c30();                                /* extern */
M2C_UNK func_02001d2c(s32, s32, M2C_UNK);           /* extern */

s32 func_0203cf10(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if ((arg0 != 0) && (arg1 != 0) && (func_02001c30() != 0)) {
        func_02001d2c(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}
