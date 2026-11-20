/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203b5d0(s32);                         /* extern */
M2C_UNK func_0203b60c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203b628(s32, M2C_UNK);                /* extern */

void func_0203b7d8(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x14;
    func_0203b5d0(M2C_FIELD(arg0, s32 *, 4) + temp_r4);
    func_0203b628(M2C_FIELD(arg0, s32 *, 4) + temp_r4, arg2);
    func_0203b60c(M2C_FIELD(arg0, s32 *, 4) + temp_r4, arg3);
}
