#include "m2c.h"

s32 func_0201b5e0(M2C_UNK, s32);                    /* extern */
extern M2C_UNK data_0212fd8c;

s32 func_020c1c74(M2C_UNK arg0) {
    if ((func_0201b5e0(arg0, M2C_FIELD(&data_0212fd8c, s32 *, 0x7C)) == 0) ||
        (func_0201b5e0(arg0, M2C_FIELD(&data_0212fd8c, s32 *, 0x80)) == 0)) {
        return 1;
    }
    return 0;
}
