#include "m2c.h"

s32 func_0208651c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020ceaa4;

void *func_02086498(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ceaa4;
    M2C_FIELD(arg0, s32 *, 4)      = func_0208651c(arg0, 1, 1, 1);
    return arg0;
}
