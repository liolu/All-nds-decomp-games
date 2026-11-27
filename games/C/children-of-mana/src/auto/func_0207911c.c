/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0207911c(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x314) + M2C_FIELD(arg0, s32 *, 0x1C0);
    func_02001cc8(temp_r4, 0, 0x300);
    M2C_FIELD(temp_r4, s32 *, 0x300) = 0;
}
