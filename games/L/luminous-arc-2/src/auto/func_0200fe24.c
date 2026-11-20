#include "m2c.h"

M2C_UNK func_02006c50(s32);                         /* extern */
M2C_UNK func_02006f34();                            /* extern */
M2C_UNK func_02007280(M2C_UNK);                     /* extern */
s32 func_0200d458();                                /* extern */
M2C_UNK func_0200ff10(M2C_UNK, M2C_UNK);            /* extern */

void func_0200fe24(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02007280(0);
    func_02007280(1);
    func_02007280(2);
    func_02007280(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0200d458();
        if (var_r0 == 4) {
            do {
                func_02006c50(0xA3A47);
                var_r0 = func_0200d458();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0200ff10(1, 1);
    }
    func_02006f34();
}
