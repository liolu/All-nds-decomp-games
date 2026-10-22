/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205aec4(s32, M2C_UNK);                /* extern */
extern s32 data_02163300;

void func_0205c204(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0205aec4(arg0, 0);
    data_02163300 &= ~arg0;
}
