/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051a34();                            /* extern */
M2C_UNK func_02057b1c();                            /* extern */
extern s32 (*data_021610f4)();

void func_02051a54(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_021610f4 != NULL) {
            var_r0 = data_021610f4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02051a34();
        return;
    }
    func_02057b1c();
}
