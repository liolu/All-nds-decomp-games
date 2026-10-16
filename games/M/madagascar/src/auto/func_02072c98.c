/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063d74();                            /* extern */
M2C_UNK func_02072c78();                            /* extern */
extern s32 (*data_020deda0)();

void func_02072c98(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_020deda0 != NULL) {
            var_r0 = data_020deda0();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02072c78();
        return;
    }
    func_02063d74();
}
