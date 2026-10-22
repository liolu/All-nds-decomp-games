/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02057b1c();                            /* extern */
extern s16 data_021610e8;

void func_02051ab4(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021610e8 = 1;
        return;
    }
    func_02057b1c();
}
