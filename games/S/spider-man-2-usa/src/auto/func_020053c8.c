/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02005414(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02005448();                                /* extern */

s32 func_020053c8(M2C_UNK arg0, M2C_UNK arg1) {
    if ((func_02005448() != 0) && (func_02005414(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}
