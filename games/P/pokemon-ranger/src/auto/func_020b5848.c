/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020b5848(void *arg0, void *arg1) {
    void *temp_r2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    }
    temp_r3_2 = M2C_FIELD(arg1, void **, 8);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0xC);
    }
    if (M2C_FIELD(arg0, void **, 0) == arg1) {
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(arg1, void **, 0xC);
    }
    M2C_FIELD(arg1, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0xC);
    temp_r2                       = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = arg1;
    }
    M2C_FIELD(arg1, void **, 8)   = NULL;
    M2C_FIELD(arg0, void **, 0xC) = arg1;
}
