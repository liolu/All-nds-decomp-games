#include "m2c.h"

extern M2C_UNK data_021704dc;

void func_02086378(void) {
    if (M2C_FIELD(&data_021704dc, void **, 4) == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 4)    = 0;
    M2C_FIELD(M2C_FIELD(&data_021704dc, void **, 4), s32 *, 0x30) = 0;
}
