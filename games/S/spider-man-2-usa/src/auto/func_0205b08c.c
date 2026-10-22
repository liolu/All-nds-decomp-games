#include "m2c.h"

extern M2C_UNK *data_021617a0;
extern s32 data_021617b0;

M2C_UNK *func_0205b08c(void) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;

    temp_r0 = data_021617a0;
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r2       = *temp_r0;
    data_021617a0 = temp_r2;
    if (temp_r2 == NULL) {
        data_021617b0 = 0;
    }
    return temp_r0;
}
