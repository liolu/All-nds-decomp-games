/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206e430(void *arg0, void **arg1) {
    void *temp_r2;

    temp_r2 = *arg1;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x35C) = arg0;
        M2C_FIELD(arg0, void **, 0x360)    = (void *) *arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x360) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x35C) = 0;
    *arg1                         = arg0;
}
