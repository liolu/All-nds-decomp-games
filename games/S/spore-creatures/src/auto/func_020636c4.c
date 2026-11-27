#include "m2c.h"

s32 func_0206373c();                                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
extern s32 data_020e0f34;

void func_020636c4(void) {
    s32 var_r0;

    var_r0 = func_02093480(0x580);
    if (var_r0 != 0) {
        var_r0 = func_0206373c();
    }
    data_020e0f34 = var_r0;
}
