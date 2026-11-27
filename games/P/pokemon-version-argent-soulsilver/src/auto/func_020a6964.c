#include "m2c.h"

extern M2C_UNK data_021e16c0;

void func_020a6964(void) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), s32 **, 0xA4);
    if (temp_r1 != NULL) {
        *temp_r1 = 0;
    }
}
