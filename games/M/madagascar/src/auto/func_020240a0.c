/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048c78(s32, s32, M2C_UNK);           /* extern */

void func_020240a0(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    func_02048c78(temp_r0, M2C_FIELD(arg0, s32 *, 0x2C), 1);
}
