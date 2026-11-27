#include "m2c.h"

void func_0208a7a0(void *arg0, void ***arg1) {
    void **temp_r0;
    void **temp_r4;

    temp_r4 = *arg1;
    *arg1   = NULL;
    temp_r0 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0 == temp_r4) {
        return;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x18) = temp_r4;
}
