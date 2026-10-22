/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204c784(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0204c800(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0204cad0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    func_0204c800(arg0, 0, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    func_0204c784(arg0, 0, 0x1E);
}
