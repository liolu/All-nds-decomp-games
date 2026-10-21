#include "m2c.h"

M2C_UNK func_02038e80(s32);                         /* extern */
M2C_UNK func_02039148();                            /* extern */
M2C_UNK func_02039494(M2C_UNK);                     /* extern */
s32 func_0203f898();                                /* extern */
M2C_UNK func_02041b9c(M2C_UNK, M2C_UNK);            /* extern */

void func_02041ab0(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02039494(0);
    func_02039494(1);
    func_02039494(2);
    func_02039494(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0203f898();
        if (var_r0 == 4) {
            do {
                func_02038e80(0xA3A47);
                var_r0 = func_0203f898();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02041b9c(1, 1);
    }
    func_02039148();
}
