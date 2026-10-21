/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020b7fa8(M2C_UNK);                       /* extern */
M2C_UNK func_020bbe90();                            /* extern */

void *func_020bbeb8(void) {
    void *temp_r0;

    temp_r0 = func_020b7fa8(0x110);
    if (temp_r0 == NULL) {
        return NULL;
    }
    func_020bbe90();
    M2C_FIELD(temp_r0, s32 *, 0x108) = 1;
    return temp_r0;
}
