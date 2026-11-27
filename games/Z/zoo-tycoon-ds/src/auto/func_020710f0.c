/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020710d0();                            /* extern */
M2C_UNK func_0206ac0c();                            /* extern */
extern s32 (*data_02187074)();

void func_020710f0(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_02187074 != NULL) {
            var_r0 = data_02187074();
        }
        if (var_r0 == 0) {
            return;
        }
        func_020710d0();
        return;
    }
    func_0206ac0c();
}
