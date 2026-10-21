/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c80ec();                            /* extern */
M2C_UNK func_020d279c();                            /* extern */
extern s32 (*data_020f9d6c)();

void func_020d27bc(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_020f9d6c != NULL) {
            var_r0 = data_020f9d6c();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020d279c();
        return;
    }
    func_020c80ec();
}
