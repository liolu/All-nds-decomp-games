/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203b230(s32);                         /* extern */
M2C_UNK func_0203b26c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203b288(s32, M2C_UNK);                /* extern */

void func_0203b57c(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;

    temp_r4 = arg1 * 0x14;
    func_0203b230(M2C_FIELD(arg0, s32 *, 4) + temp_r4);
    func_0203b288(M2C_FIELD(arg0, s32 *, 4) + temp_r4, arg2);
    func_0203b26c(M2C_FIELD(arg0, s32 *, 4) + temp_r4, arg3);
}
