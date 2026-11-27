/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bb88(s32, M2C_UNK);                /* extern */
M2C_UNK func_020636a4();                            /* extern */
M2C_UNK func_020636b8();                            /* extern */

void func_020641c4(s32 arg0, s32 arg1, s32 arg2) {
    func_020636b8();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_0205bb88(arg0 + 0x3C + (arg1 * 4), 4);
    func_020636a4();
}
