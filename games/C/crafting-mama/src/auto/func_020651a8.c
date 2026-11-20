/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020651a8(void **arg0) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x34) | 1);
        *arg0                           = NULL;
    }
}
