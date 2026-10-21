/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8e18(s32, M2C_UNK);                /* extern */
extern s32 data_020f5054;

void func_020bc990(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020c8e18(arg0, 0);
    data_020f5054 &= ~arg0;
}
