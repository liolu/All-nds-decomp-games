/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02024af4();                                /* extern */
s32 func_02024b20(M2C_UNK);                         /* extern */
s32 func_02024b78(M2C_UNK);                         /* extern */
s32 func_02024ba4(M2C_UNK);                         /* extern */

s32 func_02024bd0(M2C_UNK arg0) {
    if ((func_02024af4() != 0) || (func_02024ba4(arg0) != 0) || (func_02024b78(arg0) != 0) || (func_02024b20(arg0) != 0)) {
        return 1;
    }
    return 0;
}
