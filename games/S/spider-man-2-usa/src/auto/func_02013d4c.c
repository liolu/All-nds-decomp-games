/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02013d4c(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 == NULL) {
        return;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0xC) = NULL;
}
