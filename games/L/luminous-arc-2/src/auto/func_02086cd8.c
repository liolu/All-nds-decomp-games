#include "m2c.h"

extern M2C_UNK data_021704e8;

s32 func_02086cd8(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_021704e8, void **, 0xC) == NULL) {
        return 0;
    }
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0x44) = arg0;
    M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), s32 *, 0x48) = arg1;
    return 1;
}
