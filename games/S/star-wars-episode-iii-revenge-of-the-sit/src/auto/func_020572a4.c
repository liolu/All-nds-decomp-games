/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02044a40();                            /* extern */
M2C_UNK func_02057284();                            /* extern */
extern s32 (*data_020b3d40)();

void func_020572a4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_020b3d40 != NULL) {
            var_r0 = data_020b3d40();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02057284();
        return;
    }
    func_02044a40();
}
