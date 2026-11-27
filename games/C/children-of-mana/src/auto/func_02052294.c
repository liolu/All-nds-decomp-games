/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052274();                            /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
extern s32 (*data_0211adf4)();

void func_02052294(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0211adf4 != NULL) {
            var_r0 = data_0211adf4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02052274();
        return;
    }
    func_0205c9c4();
}
