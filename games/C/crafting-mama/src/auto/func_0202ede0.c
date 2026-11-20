#include "m2c.h"

extern M2C_UNK data_020a7508;

s32 func_0202ede0(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020a7508 + (arg0 * 4))), s32 *, 0x24);
}
