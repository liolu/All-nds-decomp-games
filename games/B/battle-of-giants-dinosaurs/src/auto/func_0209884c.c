#include "m2c.h"

void func_0209884c(void *arg0, void *arg1) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg1, void **, 8)    = temp_r3;
        M2C_FIELD(arg1, void **, 4)    = (void *) M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r3, void **, 4) = arg1;
        temp_r2                        = M2C_FIELD(arg1, void **, 4);
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, void **, 8) = arg1;
        } else {
            M2C_FIELD(arg0, void **, 8) = arg1;
        }
        return;
    }
    M2C_FIELD(arg0, void **, 8) = arg1;
    M2C_FIELD(arg0, void **, 4) = arg1;
}
