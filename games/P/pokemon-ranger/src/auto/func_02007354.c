/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_020f1894;

void func_02007354(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    if (data_020f1894 == arg0) {
        data_020f1894 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg0, void **, 8);
}
