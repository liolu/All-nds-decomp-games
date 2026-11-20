/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204867c();                            /* extern */
extern s32 data_020b1db8;

void func_020485ac(s32 arg0) {
    if (data_020b1db8 != 0) {
        return;
    }
    data_020b1db8 = 1;
    func_0204867c(arg0);
}
