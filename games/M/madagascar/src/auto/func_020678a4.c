/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02067974();                            /* extern */
extern s32 data_020dd6b8;

void func_020678a4(s32 arg0) {
    if (data_020dd6b8 != 0) {
        return;
    }
    data_020dd6b8 = 1;
    func_02067974(arg0);
}
