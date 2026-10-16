/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204590c(s32, M2C_UNK);                /* extern */
extern s32 data_020b3e44;

void func_02057740(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0204590c(arg0, 0);
    data_020b3e44 &= ~arg0;
}
