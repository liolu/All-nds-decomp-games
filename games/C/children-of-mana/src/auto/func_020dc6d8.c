/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fe8(s32, M2C_UNK);                /* extern */

void func_020dc6d8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = 2;
    func_02035fe8(arg1, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}
