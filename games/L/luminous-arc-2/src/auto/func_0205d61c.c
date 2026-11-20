#include "m2c.h"

extern M2C_UNK data_0216bdb0;

void func_0205d61c(s32 arg0) {
    if (arg0 < 1) {
        return;
    }
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_0216bdb0 + (arg0 * 4))), s32 *, 0xC) = 1;
}
