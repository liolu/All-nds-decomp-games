/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c80ec();                            /* extern */
extern s16 data_020f9d60;

void func_020d281c(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020f9d60 = 1;
        return;
    }
    func_020c80ec();
}
