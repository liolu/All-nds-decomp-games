/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045828(s32, s32);                    /* extern */
M2C_UNK func_02059d00(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02059ccc(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02059d00(arg0, arg2, arg3);
    func_02045828(arg0, arg0 + arg1);
}
