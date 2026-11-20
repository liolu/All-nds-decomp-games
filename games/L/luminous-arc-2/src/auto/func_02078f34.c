#include "m2c.h"

extern u8 data_02151424;
extern M2C_UNK data_021701c4;

void func_02078f34(void) {
    if ((data_02151424 != 0) && (M2C_FIELD(&data_021701c4, void **, 4) != NULL)) {
        M2C_FIELD(M2C_FIELD(&data_021701c4, void **, 4), s32 *, 4) =
            (s32) (M2C_FIELD(M2C_FIELD(&data_021701c4, void **, 4), s32 *, 4) | 4);
    }
}
