#include "m2c.h"

extern M2C_UNK data_021704e8;

void func_02087610(void) {
    if (M2C_FIELD(&data_021704e8, void **, 0xC) == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0)   = 0;
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s8 *, 0x1E) = 0;
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s8 *, 0x1F) = 0;
}
