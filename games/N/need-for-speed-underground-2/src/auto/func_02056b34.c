/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02056b68(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0205bd18(s32, s32);                    /* extern */

void func_02056b34(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02056b68(arg0, arg2, arg3);
    func_0205bd18(arg0, arg0 + arg1);
}
