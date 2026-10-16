/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02066320(s32, M2C_UNK);                /* extern */
M2C_UNK func_020686b4();                            /* extern */
M2C_UNK func_020686c8();                            /* extern */

void func_020691d4(s32 arg0, s32 arg1, s32 arg2) {
    func_020686c8();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02066320(arg0 + 0x3C + (arg1 * 4), 4);
    func_020686b4();
}
