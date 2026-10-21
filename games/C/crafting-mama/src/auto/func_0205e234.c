#include "m2c.h"

void func_0205e234(void *arg0, s16 arg1, s16 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x34)                        = arg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s16 *, 0x36) = arg2;
    }
}
