#include "m2c.h"

extern M2C_UNK data_02170334;

s32 func_02084290(void) {
    if ((M2C_FIELD(&data_02170334, void **, 4) != NULL) && (M2C_FIELD(M2C_FIELD(&data_02170334, void **, 4), u16 *, 4) == 6)) {
        return 1;
    }
    return 0;
}
