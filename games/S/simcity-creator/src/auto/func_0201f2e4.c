#include "m2c.h"

M2C_UNK func_0201424c(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020c8110;

s32 func_0201f2e4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        func_0201424c(arg0 + 0x2C, &data_020c8110);
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
    }
    return 0;
}
