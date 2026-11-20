/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c80ec();                            /* extern */
M2C_UNK func_020d0888();                            /* extern */
extern s32 data_020f92c0;
extern s32 (*data_020f92c4)();

void func_020d08c8(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_020f92c0 = 1;
        if (data_020f92c4 != NULL) {
            var_r0 = data_020f92c4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020d0888();
        return;
    }
    func_020c80ec();
}
