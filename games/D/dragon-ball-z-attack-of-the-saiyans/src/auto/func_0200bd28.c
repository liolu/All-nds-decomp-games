/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200bd28(void *arg0) {
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if (arg0 == M2C_FIELD(temp_r3, void **, 0xC)) {
        M2C_FIELD(temp_r3, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    temp_r2 = M2C_FIELD(arg0, void **, 4);
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = temp_r1;
    } else {
        M2C_FIELD(temp_r3, void **, 8) = temp_r1;
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    temp_r1_2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = temp_r1_2;
    } else {
        M2C_FIELD(temp_r3, void **, 4) = temp_r1_2;
    }
    M2C_FIELD(arg0, void **, 4)    = (void *) M2C_FIELD(temp_r3, void **, 0);
    M2C_FIELD(temp_r3, void **, 0) = arg0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    return 0;
}
