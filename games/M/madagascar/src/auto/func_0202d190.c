/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d0e8();                            /* extern */
extern s8 data_020d09c4;

void func_0202d190(void) {
    s32 var_r2;
    s8 *var_r1;

    var_r1 = &data_020d09c4;
    var_r2 = 0;
    do {
        var_r2 += 1;
        *var_r1 = 0;
        var_r1 += 0x58;
    } while (var_r2 < 0x20);
    func_0202d0e8();
}
