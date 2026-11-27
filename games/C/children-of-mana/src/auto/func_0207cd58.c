/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207cf30(void *, s32);                 /* extern */

void func_0207cd58(void *arg0, s32 arg1) {
    if (arg1 < 8) {
        return;
    }
    if (arg1 > 0xA) {
        return;
    }
    func_0207cf30(arg0, M2C_FIELD(arg0, s32 *, 0x260) + (arg1 - 8));
}
