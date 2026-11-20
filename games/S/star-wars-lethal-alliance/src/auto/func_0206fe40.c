/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206768c();                            /* extern */
M2C_UNK func_0206fda8();                            /* extern */
extern s32 data_020e8ca0;
extern s32 (*data_020e8ca4)();

void func_0206fe40(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020e8ca0 != 0) {
            return;
        }
        var_r0        = 1;
        data_020e8ca0 = 1;
        if (data_020e8ca4 != NULL) {
            var_r0 = data_020e8ca4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0206fda8();
        return;
    }
    func_0206768c();
}
