#include "m2c.h"

s32 func_020084fc(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_0200be80(s32 arg0) {
    if (func_020084fc(9, arg0 | 0x03004000, 0) >= 0) {
        return 1;
    }
    return 0;
}
