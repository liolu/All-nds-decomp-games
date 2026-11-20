/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063d74();                            /* extern */
M2C_UNK func_0206acf0();                            /* extern */
extern s32 data_020de1a0;
extern s32 (*data_020de1a4)();

void func_0206ad40(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_020de1a0 = 1;
        if (data_020de1a4 != NULL) {
            var_r0 = data_020de1a4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0206acf0();
        return;
    }
    func_02063d74();
}
