/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020468e4(s32);                         /* extern */
s32 func_02049c40();                                /* extern */

void func_020480e4(s32 arg0) {
    s32 var_r0;

    if (func_02049c40() == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_020468e4(arg0 + 0x198);
}
