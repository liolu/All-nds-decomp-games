#include "m2c.h"

extern M2C_UNK data_021704e8;

s32 func_02087334(void) {
    if (M2C_FIELD(&data_021704e8, void **, 12) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 12), s32 *, 0x14);
    }
    return 0;
}
