/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202aa08(void *arg0, void **arg1, void **arg2) {
    void *temp_r3;

    temp_r3 = *arg1;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x48) = arg0;
        M2C_FIELD(arg0, void **, 0x44)    = (void *) *arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x44) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    *arg1                        = arg0;
    if (*arg2 == NULL) {
        *arg2 = arg0;
    }
}
