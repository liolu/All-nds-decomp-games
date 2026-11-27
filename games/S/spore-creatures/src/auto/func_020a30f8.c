#include "m2c.h"

M2C_UNK func_020a334c();                            /* extern */
extern M2C_UNK data_020dfff8;

void *func_020a30f8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfff8;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020a334c(arg0);
    }
    return arg0;
}
