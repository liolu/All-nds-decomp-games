/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064dac(s32, s32);                    /* extern */
M2C_UNK func_020659d8(s32);                         /* extern */
M2C_UNK func_02048bbc(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02048b80(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_02048bbc(arg0, arg2, arg3);
    func_02064dac(arg0, arg0 + arg1);
    func_020659d8(arg0);
}
