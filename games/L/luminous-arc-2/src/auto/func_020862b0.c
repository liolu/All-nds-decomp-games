#include "m2c.h"

extern M2C_UNK data_021704dc;

s32 func_020862b0(void) {
    if (M2C_FIELD(&data_021704dc, void **, 4) != NULL) {
        return M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x1C);
    }
    return 0;
}
