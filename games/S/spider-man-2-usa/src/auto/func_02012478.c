/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02012348();                                /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern s32 data_0215b3b8;

void func_02012478(void) {
    s32 var_r0;

    var_r0 = func_0203a6cc(0x20);
    if (var_r0 != 0) {
        var_r0 = func_02012348();
    }
    data_0215b3b8 = var_r0;
}
