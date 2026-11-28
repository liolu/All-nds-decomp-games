/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248dc();                            /* extern */
M2C_UNK func_0200fe08();                            /* extern */
extern s32 data_020eba1c;
extern s32 (*data_020eba20)();

void func_0200fe28(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020eba1c != 0) {
            return;
        }
        var_r0 = 0;
        if (data_020eba20 != NULL) {
            var_r0 = data_020eba20();
        }
        if (var_r0 != 0) {
            func_0200fe08();
        }
        data_020eba1c = 1;
        return;
    }
    func_020248dc();
}
