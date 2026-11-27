/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_02077f14();                      /* extern */
M2C_UNK func_020804fc();                      /* extern */

void *func_020803c8(void *arg0) {
    void *var_r3;

    M2C_FIELD(arg0, s8 *, 0)  = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s8 *, 8)  = 0;
    var_r3                    = arg0 + 0xC;
    do {
        M2C_FIELD(var_r3, s8 *, 0)  = -1;
        M2C_FIELD(var_r3, s32 *, 4) = -1;
        M2C_FIELD(var_r3, s8 *, 8)  = 0;
        var_r3 += 0xC;
    } while ((u32) var_r3 < (u32) (arg0 + 0x1BC));
    func_02077f14();
    func_02077f14(arg0 + 0x1DC);
    func_020804fc(arg0);
    return arg0;
}
