#include "m2c.h"

extern M2C_UNK data_021701c4;

s32 func_02078f08(void) {
    if (M2C_FIELD(&data_021701c4, void **, 4) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_021701c4, void **, 4), s32 *, 0x4);
    }
    return 0;
}
