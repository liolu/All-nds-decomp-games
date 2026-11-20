/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02048ea8(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, M2C_UNK(**)(), 0x28)(arg0);
    }
    M2C_FIELD(arg0, void **, 4)  = NULL;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
