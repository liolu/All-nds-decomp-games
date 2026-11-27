/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8f74(void *, M2C_UNK);             /* extern */

void func_020c932c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x80) == 0) {
        return;
    }
    func_020c8f74(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x1FAC) = 0xF;
}
