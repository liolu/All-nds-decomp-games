#include "m2c.h"

void func_020a5a88(void *arg0) {
    void **temp_r2_2;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    temp_r2_2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r2_2 != NULL) {
        *temp_r2_2 = M2C_FIELD(arg0, void **, 0);
    }
    M2C_FIELD(arg0, void **, 0)  = NULL;
    M2C_FIELD(arg0, void ***, 4) = NULL;
}
