/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020315bc(s32);                         /* extern */
M2C_UNK func_02033ee4(s32);                         /* extern */
M2C_UNK func_0203f560(s32);                         /* extern */
M2C_UNK func_0203f5cc();                            /* extern */

void func_0203e2d4(s32 arg0) {
    s32 var_r6;

    if (arg0 == 0) {
        return;
    }
    func_0203f5cc();
    func_0203f560(arg0);
    func_020315bc(arg0);
    func_020315bc(arg0 + 0xF8);
    func_020315bc(arg0 + 0x26C);
    var_r6 = 0;
    do {
        func_02033ee4((var_r6 * 0x24) + (arg0 + 0x364));
        var_r6 += 1;
    } while (var_r6 < 3);
}
