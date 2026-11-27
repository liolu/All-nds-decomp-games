#include "m2c.h"

void func_02004cd0(void *arg0) {
    M2C_UNK *temp_r1;
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r2_2;
    M2C_UNK *temp_r2_3;

    temp_r2 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (temp_r2 != NULL) {
        temp_r1 = M2C_FIELD(arg0, M2C_UNK **, 4);
        if (temp_r2 != temp_r1) {
            M2C_FIELD(temp_r2, M2C_UNK **, 4) = temp_r1;
            *M2C_FIELD(arg0, M2C_UNK **, 4)   = M2C_FIELD(arg0, M2C_UNK **, 0);
            temp_r2_2                         = M2C_FIELD(arg0, M2C_UNK **, 0);
            M2C_FIELD(arg0, M2C_UNK **, 4)    = temp_r2_2;
            temp_r2_3                         = M2C_FIELD(temp_r2_2, M2C_UNK **, 0);
            M2C_FIELD(arg0, M2C_UNK **, 0)    = temp_r2_3;
            M2C_FIELD(temp_r2_3, s32 *, 4)    = 0;
            *M2C_FIELD(arg0, M2C_UNK **, 4)   = NULL;
        }
    }
}
