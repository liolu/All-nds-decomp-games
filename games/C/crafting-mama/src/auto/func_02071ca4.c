/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0202b004();                            /* extern */
M2C_UNK func_0202b0b8();                            /* extern */
s32 func_0202f4b4(M2C_UNK);                         /* extern */
M2C_UNK func_020315bc(s32);                         /* extern */
M2C_UNK func_020365f0();                            /* extern */
M2C_UNK func_0205e7e8();                            /* extern */
M2C_UNK func_0205ee98();                            /* extern */
M2C_UNK func_0205f2a4();                            /* extern */
M2C_UNK func_02065b00();                            /* extern */
M2C_UNK func_0206691c();                            /* extern */
M2C_UNK func_02070d8c();                            /* extern */

void func_02071ca4(void) {
    s32 temp_r5;
    s32 var_r6;

    temp_r5 = func_0202f4b4(0xE);
    func_0205f2a4();
    func_020365f0();
    func_0202b0b8();
    func_0206691c();
    func_0202b004();
    func_0205e7e8();
    func_02070d8c();
    var_r6 = 0;
    do {
        func_020315bc((var_r6 * 0x7C) + temp_r5);
        var_r6 += 1;
    } while (var_r6 < 0xE);
    func_0205ee98();
    func_02065b00();
}
