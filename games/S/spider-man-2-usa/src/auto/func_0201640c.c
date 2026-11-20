/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffabf4();                            /* extern */
extern s32 data_0215b484;
extern s32 data_0215b490;

void func_0201640c(void) {
    if (data_0215b484 == 0) {
        return;
    }
    func_01ffabf4();
    data_0215b484 = 0;
    data_0215b490 = 0;
}
