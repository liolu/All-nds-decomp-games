/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201c0f4();                                /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern s32 data_0215b6c0;

void func_0201c1b4(void) {
    s32 var_r0;

    var_r0 = func_0203a6cc(0x10);
    if (var_r0 != 0) {
        var_r0 = func_0201c0f4();
    }
    data_0215b6c0 = var_r0;
}
