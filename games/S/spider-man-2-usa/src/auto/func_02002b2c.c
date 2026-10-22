/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014bcc(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_0215b3d4;

void func_02002b2c(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    func_02014bcc(&data_0215b3d4, 2, var_r4);
    M2C_FIELD(arg0, s32 *, 0x374) = var_r4;
}
