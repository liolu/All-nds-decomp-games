/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a1a70(void *, s32, M2C_UNK);        /* extern */

void func_020a2374(void *arg0) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x498) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r1 == 0) {
        return;
    }
    func_020a1a70(arg0, temp_r1, 1);
}
