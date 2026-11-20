#include "m2c.h"

extern M2C_UNK data_021704dc;

s32 func_02086b78(void) {
    if ((M2C_FIELD(&data_021704dc, void **, 4) != NULL) && (M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 4) == 5)) {
        return 1;
    }
    return 0;
}
