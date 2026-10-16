/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064dd8(s32, s32);                    /* extern */
M2C_UNK func_02065a1c(s32);                         /* extern */
M2C_UNK func_0205bf30(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0205bec0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0205bf30(arg0, arg2, arg3);
    func_02064dd8(arg0, arg0 + arg1);
    func_02065a1c(arg0);
}
