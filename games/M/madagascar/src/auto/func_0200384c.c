/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020038b0();                            /* extern */
extern s32 data_020cf840;
extern s32 data_020cf848;
extern s32 data_020cf84c;

void func_0200384c(s32 arg0) {
    data_020cf84c = 0x40;
    data_020cf840 = arg0;
    data_020cf848 = 1;
    func_020038b0();
}
