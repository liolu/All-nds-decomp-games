/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202a9d0(void *arg0, void **arg1, void **arg2) {
    void *temp_r3;

    temp_r3 = *arg2;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x44) = arg0;
        M2C_FIELD(arg0, void **, 0x48)    = (void *) *arg2;
    } else {
        M2C_FIELD(arg0, void **, 0x48) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    *arg2                        = arg0;
    if (*arg1 == NULL) {
        *arg1 = arg0;
    }
}
