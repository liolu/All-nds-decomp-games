/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d22c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203f00c(void *, M2C_UNK);             /* extern */

void func_0203f7bc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1E5) != 0) {
        func_0203f00c(arg0, 1);
        return;
    }
    func_0203d22c(arg0, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0x14;
}
