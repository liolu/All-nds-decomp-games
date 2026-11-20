/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0202c330(void *arg0, void **arg1) {
    void *temp_r2;

    temp_r2 = *arg1;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x24) = arg0;
        M2C_FIELD(arg0, void **, 0x20)    = (void *) *arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x20) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    *arg1                        = arg0;
}
