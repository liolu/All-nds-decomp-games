/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_0202b0b8();                            /* extern */
M2C_UNK func_020315bc(s32);                         /* extern */
M2C_UNK func_020365a4();                            /* extern */
M2C_UNK func_0205e7e8();                            /* extern */
M2C_UNK func_0205ee98();                            /* extern */
M2C_UNK func_020603f0();                            /* extern */
extern M2C_UNK data_020c84ac;

void func_0206016c(void) {
    s32 var_r6;

    func_0205ee98();
    func_0202b0b8();
    func_0205e7e8();
    func_020365a4();
    var_r6 = 0;
    do {
        func_020315bc((var_r6 * 0x7C) + (s32) &data_020c84ac);
        var_r6 += 1;
    } while (var_r6 < 3);
    func_020603f0();
}
