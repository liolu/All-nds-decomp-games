#include "m2c.h"

s32 func_02097c60();                                /* extern */
s32 func_02097d84(void *, M2C_UNK, M2C_UNK);        /* extern */

s32 func_02097c0c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02097c60() != 0) {
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x17AC) == 1) && (func_02097d84(arg0, arg1, arg2) != 0)) {
        return 1;
    }
    return 0;
}
