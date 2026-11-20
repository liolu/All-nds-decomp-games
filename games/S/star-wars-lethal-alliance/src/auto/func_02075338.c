/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020683a4(s32, M2C_UNK);                /* extern */
extern s32 data_020ea69c;

void func_02075338(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020683a4(arg0, 0);
    data_020ea69c &= ~arg0;
}
