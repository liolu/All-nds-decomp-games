/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248dc();                            /* extern */
extern s16 data_020eba0c;

void func_0200fea8(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020eba0c = 1;
        return;
    }
    func_020248dc();
}
