/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020514ec();                            /* extern */
M2C_UNK func_02057b1c();                            /* extern */
extern s32 data_021610e0;
extern s32 (*data_021610e4)();

void func_02051530(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_021610e0 = 1;
        if (data_021610e4 != NULL) {
            var_r0 = data_021610e4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020514ec();
        return;
    }
    func_02057b1c();
}
