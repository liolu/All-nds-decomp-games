/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020672dc(s32);                         /* extern */
M2C_UNK func_0206768c();                            /* extern */
s32 func_0206d8e8();                                /* extern */
M2C_UNK func_0206fcd4(M2C_UNK, M2C_UNK);            /* extern */

void func_0206fda8(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0206d8e8();
        if (var_r0 == 4) {
            do {
                func_020672dc(0xA3A47);
                var_r0 = func_0206d8e8();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0206fcd4(1, 1);
    }
    func_0206768c();
}
