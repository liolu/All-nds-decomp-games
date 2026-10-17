/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020013b4();                                /* extern */

void func_02001af8(void *arg0) {
    void **temp_r0;

    if (func_020013b4() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    temp_r0                      = M2C_FIELD(arg0, void ***, 0);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0) = NULL;
}
