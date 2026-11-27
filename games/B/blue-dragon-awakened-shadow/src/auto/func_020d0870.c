/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_020d0590(s32);                         /* extern */

s32 func_020d0870(s32 arg0) {
    void *var_r2;

    var_r2 = arg0 + 0xF00;
    do {
        M2C_FIELD(var_r2, s32 *, 4) = 0;
        var_r2 += 8;
    } while ((u32) var_r2 < (u32) (arg0 + 0xF30));
    func_020d0590(arg0);
    MI_CpuFill8(arg0 + 0xF30, 0, 0x90);
    return arg0;
}
