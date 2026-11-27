/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020671d8(s32);                         /* extern */
M2C_UNK func_0206775c();                            /* extern */

void func_02004fd0(s32 arg0, s32 arg1) {
    func_0206775c();
    *(s32 *) 0x04000000 &= ~0x40000000;
    if (arg0 != 0) {
        *(s32 *) 0x04000000 |= 0x40000000;
    }
    func_020671d8(arg1);
    *(s32 *) 0x04001000 &= ~0x40000000;
    if (arg1 != 0) {
        *(s32 *) 0x04001000 |= 0x40000000;
    }
}
