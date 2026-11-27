/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d279c();                            /* extern */

void func_020e8c44(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x40) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x58)(temp_r0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_020d279c();
}
