/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020178dc();                            /* extern */

void func_020178b8(s32 arg0, s32 arg1, s32 arg2) {
    func_020178dc();
    M2C_FIELD((arg0 + (arg2 * 4)), s32 *, 0x104) = arg1;
}
