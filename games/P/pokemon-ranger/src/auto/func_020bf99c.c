/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cb8fc(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020cb968(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020bf99c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_020cb8fc(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA0) + arg3, 0);
    func_020cb968(arg0 + 0x5C, arg1, arg2);
}
