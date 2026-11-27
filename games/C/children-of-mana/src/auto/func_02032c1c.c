/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02032a44();                                /* extern */
extern s32 data_02115514;

void func_02032c1c(void) {
    s32 var_r0;

    if (data_02115514 != 0) {
        return;
    }
    var_r0 = func_0200f270(0x3C, 0);
    if (var_r0 != 0) {
        var_r0 = func_02032a44();
    }
    data_02115514 = var_r0;
}
