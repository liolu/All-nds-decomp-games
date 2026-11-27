/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ef9bc();                            /* extern */

void func_020ef9e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
        return;
    }
    func_020ef9bc(arg0);
}
