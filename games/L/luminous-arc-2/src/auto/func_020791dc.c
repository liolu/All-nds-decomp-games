#include "m2c.h"

extern M2C_UNK data_021701c4;

s32 func_020791dc(void) {
    if (M2C_FIELD(&data_021701c4, s32 *, 4) != 0) {
        return M2C_FIELD(&data_021701c4, s32 *, 4) + 0x318;
    }
    return 0;
}
