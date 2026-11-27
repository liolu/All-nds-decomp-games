/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205c9c4();                            /* extern */
extern s16 data_0211ade8;

void func_020522f4(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0211ade8 = 1;
        return;
    }
    func_0205c9c4();
}
