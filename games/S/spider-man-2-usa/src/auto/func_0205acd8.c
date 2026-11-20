/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b5ec();                            /* extern */
M2C_UNK func_0205b784();                            /* extern */
extern s32 data_0216179c;

void func_0205acd8(void) {
    if (data_0216179c != 0) {
        return;
    }
    data_0216179c = 1;
    func_0205b5ec();
    func_0205b784();
}
