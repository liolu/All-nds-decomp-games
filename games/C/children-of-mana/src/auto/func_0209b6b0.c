/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020993cc();                            /* extern */
M2C_UNK func_0209fed0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0209b6b0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020993cc();
    func_0209fed0(M2C_FIELD(arg0, s32 *, 0x100), arg1, arg2);
}
