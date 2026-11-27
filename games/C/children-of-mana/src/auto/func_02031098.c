/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069414(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */

void func_02031098(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    temp_r1                      = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 == 0) {
        return;
    }
    func_02069414(M2C_FIELD(arg0, s32 *, 0x14), temp_r1, 0, 0, 0, 0, arg2, arg3);
}
