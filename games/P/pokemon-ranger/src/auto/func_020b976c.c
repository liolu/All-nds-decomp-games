/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020b7fa8(M2C_UNK);                       /* extern */
M2C_UNK func_020b9730();                            /* extern */

void *func_020b976c(void) {
    void *temp_r0;

    temp_r0 = func_020b7fa8(0x50);
    if (temp_r0 == NULL) {
        return NULL;
    }
    func_020b9730();
    M2C_FIELD(temp_r0, s32 *, 0x4C) = 1;
    return temp_r0;
}
