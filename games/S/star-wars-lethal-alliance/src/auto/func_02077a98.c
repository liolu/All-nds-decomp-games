/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02068294(s32, s32);                    /* extern */
M2C_UNK func_02069458(s32);                         /* extern */
M2C_UNK func_02077b08(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02077a98(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02077b08(arg0, arg2, arg3);
    func_02068294(arg0, arg0 + arg1);
    func_02069458(arg0);
}
