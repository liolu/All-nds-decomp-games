/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063048(M2C_UNK, s32);                /* extern */
M2C_UNK func_02063064();                            /* extern */
M2C_UNK func_02070630(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0206fc54(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02063048(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02063064();
    func_02070630(arg2, arg0, arg1);
}
