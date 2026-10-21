/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0206dd0c(void **arg0) {
    void *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, s32 *, 0x34) = 1;
        *arg0                           = NULL;
    }
}
