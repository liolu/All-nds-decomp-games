/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020eaef8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x14) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x28);
    if (temp_r0_2 == NULL) {
        return;
    }
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    M2C_FIELD(arg0, void ***, 0x28) = NULL;
}
