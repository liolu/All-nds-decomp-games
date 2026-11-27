/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201262c();                            /* extern */

void func_02012bd8(s32 arg0) {
    s32 temp_lr;
    u16 var_r2;

    var_r2 = 0;
    do {
        temp_lr                         = (var_r2 * 0x1C) + arg0;
        M2C_FIELD(temp_lr, s8 *, 0x75A) = 0;
        var_r2 += 1;
        M2C_FIELD(temp_lr, s8 *, 0x75D) = 0;
    } while ((u32) var_r2 < 0x9C4U);
    func_0201262c();
}
