#include "m2c.h"

M2C_UNK func_02006750(s32);                         /* extern */
M2C_UNK func_02006964();                            /* extern */
M2C_UNK func_02006cb0(M2C_UNK);                     /* extern */
s32 func_0200c4dc();                                /* extern */
M2C_UNK func_0200e8e8(M2C_UNK, M2C_UNK);            /* extern */

void func_0200e7fc(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02006cb0(0);
    func_02006cb0(1);
    func_02006cb0(2);
    func_02006cb0(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0200c4dc();
        if (var_r0 == 4) {
            do {
                func_02006750(0xA3A47);
                var_r0 = func_0200c4dc();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0200e8e8(1, 1);
    }
    func_02006964();
}
