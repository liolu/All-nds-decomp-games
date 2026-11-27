/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207b170(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0207b230(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_02100354;

void func_0207f860(void *arg0) {
    s32 var_r0;

    var_r0 = func_0200f270(0x60, 0);
    if (var_r0 != 0) {
        var_r0 = func_0207b230(var_r0, 2);
    }
    M2C_FIELD(arg0, s32 *, 0x3B4) = var_r0;
    func_0207b170(M2C_FIELD(arg0, s32 *, 0x3B4), &data_02100354, 0);
}
