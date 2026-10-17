#include "m2c.h"

extern M2C_UNK *data_020dbaec;
extern s32 data_020dbafc;

M2C_UNK *func_02065120(void) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;

    temp_r0 = data_020dbaec;
    if (temp_r0 == NULL) {
        return NULL;
    }
    temp_r2       = *temp_r0;
    data_020dbaec = temp_r2;
    if (temp_r2 == NULL) {
        data_020dbafc = 0;
    }
    return temp_r0;
}
