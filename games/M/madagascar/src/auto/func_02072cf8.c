/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063d74();                            /* extern */
extern s16 data_020ded94;

void func_02072cf8(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_020ded94 = 1;
        return;
    }
    func_02063d74();
}
