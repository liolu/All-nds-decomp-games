/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206714c(s32);                         /* extern */
M2C_UNK func_020676a4();                            /* extern */

void func_02003014(s32 arg0, s32 arg1) {
    func_020676a4();
    *(s32 *) 0x04000000 &= ~0x80000000;
    if (arg0 != 0) {
        *(s32 *) 0x04000000 |= 0x80000000;
    }
    func_0206714c(arg1);
    *(s32 *) 0x04001000 &= ~0x80000000;
    if (arg1 != 0) {
        *(s32 *) 0x04001000 |= 0x80000000;
    }
}
