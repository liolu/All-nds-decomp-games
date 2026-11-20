#include "m2c.h"

extern M2C_UNK data_02170354;

s32 func_020852b8(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_02170354, void **, 0x0) == NULL) {
        return 0;
    }
    M2C_FIELD(M2C_FIELD(&data_02170354, void **, 0x0), s32 *, 0x90) = arg0;
    M2C_FIELD(M2C_FIELD(&data_02170354, void **, 0x0), s32 *, 0x94) = arg1;
    return 1;
}
