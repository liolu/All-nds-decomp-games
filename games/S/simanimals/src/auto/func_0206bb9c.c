#include "m2c.h"

M2C_UNK func_02064aac(s32);                         /* extern */
M2C_UNK func_02064c14();                            /* extern */
M2C_UNK func_02064e9c(M2C_UNK);                     /* extern */
s32 func_020698e0();                                /* extern */
M2C_UNK func_0206bc98(M2C_UNK, M2C_UNK);            /* extern */

void func_0206bb9c(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02064e9c(0);
    func_02064e9c(1);
    func_02064e9c(2);
    func_02064e9c(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020698e0();
        if (var_r0 == 4) {
            do {
                func_02064aac(0xA3A47);
                var_r0 = func_020698e0();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0206bc98(1, 1);
    }
    func_02064c14();
}
