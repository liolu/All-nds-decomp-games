/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6fcc(s32, M2C_UNK);                /* extern */
M2C_UNK func_020c9098();                            /* extern */
M2C_UNK func_020c90ac();                            /* extern */

void func_020c9bb8(s32 arg0, s32 arg1, s32 arg2) {
    func_020c90ac();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020c6fcc(arg0 + 0x3C + (arg1 * 4), 4);
    func_020c9098();
}
