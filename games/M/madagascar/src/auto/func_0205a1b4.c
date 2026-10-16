/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064ee8(s32, M2C_UNK);                /* extern */
extern s32 data_020da05c;

void func_0205a1b4(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02064ee8(arg0, 0);
    data_020da05c &= ~arg0;
}
