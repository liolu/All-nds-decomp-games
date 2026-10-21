#include "m2c.h"

extern M2C_UNK data_02147904;

void func_02098acc(void) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&data_02147904, void **, 4), s32 **, 0xA4);
    if (temp_r1 != NULL) {
        *temp_r1 = 0;
    }
}
