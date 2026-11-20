/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ca0e8(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_020cf4f8(s32 arg0) {
    if (func_020ca0e8(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
