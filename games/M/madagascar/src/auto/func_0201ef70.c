/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046d08(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_0207b068(s32);                             /* extern */

void func_0201ef70(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0x64) != 0) {
        temp_r0 = func_0207b068(0x2020);
        if (temp_r0 == 0) {
            return;
        }
        func_02046d08(temp_r0, arg1, 0x06200000, arg2, arg3, 0x40);
        return;
    }
    temp_r0_2 = func_0207b068(0x2020);
    if (temp_r0_2 == 0) {
        return;
    }
    func_02046d08(temp_r0_2, arg1, 0x06000000, arg2, arg3, 0x40);
}
