#include "m2c.h"

s32 func_02074300(M2C_UNK);                         /* extern */
s32 func_0209d364(M2C_UNK *);                       /* extern */
M2C_UNK func_020bc614(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02101be4;

void func_020bc400(M2C_UNK arg0) {
    s32 var_r0;

    var_r0 = func_0209d364(&data_02101be4);
    if (var_r0 == 0) {
        var_r0 = func_02074300(0x2C);
    }
    if (var_r0 == 0) {
        return;
    }
    func_020bc614(var_r0, arg0);
}
