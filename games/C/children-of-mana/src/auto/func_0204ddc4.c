/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204dbf8(void *, s32, s32);            /* extern */
M2C_UNK func_0204dcb8(void *, s32, s32);            /* extern */

void func_0204ddc4(void *arg0, s32 arg1) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    temp_r4                       = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x14)  = arg1;
    func_0204dbf8(arg0, M2C_FIELD(arg0, s32 *, 0x14), temp_r4);
    func_0204dcb8(arg0, M2C_FIELD(arg0, s32 *, 0x14), temp_r4);
}
