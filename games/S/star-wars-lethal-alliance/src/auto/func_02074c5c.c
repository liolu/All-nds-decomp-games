/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0206768c();                            /* extern */
M2C_UNK func_02074c3c();                            /* extern */
extern s32 data_020ea07c;
extern s32 (*data_020ea080)();

void func_02074c5c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (data_020ea07c != 0) {
            return;
        }
        var_r0 = 0;
        if (data_020ea080 != NULL) {
            var_r0 = data_020ea080();
        }
        if (var_r0 != 0) {
            func_02074c3c();
        }
        data_020ea07c = 1;
        return;
    }
    func_0206768c();
}
