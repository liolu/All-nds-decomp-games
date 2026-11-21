#include "m2c.h"

s32 func_ov013_0222b990();                                /* extern */
extern M2C_UNK data_ov013_02244f18;

s32 func_ov013_02227b3c(void) {
    return *((M2C_UNK *) ((s8 *) &data_ov013_02244f18 + (func_ov013_0222b990() * 4)));
}
