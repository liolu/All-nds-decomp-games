/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e0a4();                            /* extern */
M2C_UNK func_020e04a8();                            /* extern */

void func_02097710(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x10)(temp_r0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x35) != 0) && (M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        func_020e04a8();
    }
    if (M2C_FIELD(arg0, u8 *, 0x36) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_0204e0a4();
}
