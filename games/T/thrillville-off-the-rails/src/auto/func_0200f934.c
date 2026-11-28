/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248dc();                            /* extern */
M2C_UNK func_0200f8ac();                            /* extern */
extern s32 data_020eba00;
extern s32 (*data_020eba04)();

void func_0200f934(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020eba00 != 0) {
            return;
        }
        var_r0        = 1;
        data_020eba00 = 1;
        if (data_020eba04 != NULL) {
            var_r0 = data_020eba04();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0200f8ac();
        return;
    }
    func_020248dc();
}
