/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204c784(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0204c800(void *, s32, M2C_UNK);        /* extern */

void func_0204ca94(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    func_0204c800(arg0, M2C_FIELD(arg0, s32 *, 0x3C), 0x1E);
    func_0204c784(arg0, M2C_FIELD(arg0, s32 *, 0x40), 0x1E);
}
