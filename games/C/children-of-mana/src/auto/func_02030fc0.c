/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e8ac(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_02030fc0(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 == 0) {
        return;
    }
    func_0203e8ac(M2C_FIELD(arg0, s32 *, 0x14), temp_r1, 0, 0);
}
