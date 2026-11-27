/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020aca3c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0210058c;
extern M2C_UNK data_02101364;

void func_020849b8(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101364, &data_0210058c, temp_r0);
    if (temp_r0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_020aca3c(M2C_FIELD(arg0, s32 *, 0x300), var_r1);
}
