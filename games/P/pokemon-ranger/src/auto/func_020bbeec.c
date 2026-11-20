/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020b7fa8(M2C_UNK);                       /* extern */

void *func_020bbeec(void) {
    void *temp_r0;

    temp_r0 = func_020b7fa8(0x14);
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
    M2C_FIELD(temp_r0, s32 *, 4)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    return temp_r0;
}
