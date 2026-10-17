/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02037ce8();                                /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020d879c;

void func_02037dfc(void) {
    s32 var_r0;

    var_r0 = func_0207b068(0x1C);
    if (var_r0 != 0) {
        var_r0 = func_02037ce8();
    }
    data_020d879c = var_r0;
}
