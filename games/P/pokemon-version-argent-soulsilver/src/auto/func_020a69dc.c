#include "m2c.h"

extern M2C_UNK data_021e16c0;

void func_020a69dc(s32 arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), void **, 0xA4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x38) = arg0;
    }
}
