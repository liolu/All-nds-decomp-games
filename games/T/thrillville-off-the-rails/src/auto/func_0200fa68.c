/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020237e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
s32 func_0200fd78();                                /* extern */
extern s32 data_020eba08;

void func_0200fa68(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_02024624();
    data_020eba08 = arg0;
    if (func_0200fd78() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020237e0(0xF000, var_r1);
    }
    func_02024638(temp_r4);
}
