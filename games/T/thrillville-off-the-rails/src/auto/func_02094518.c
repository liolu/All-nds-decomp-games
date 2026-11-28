#include "m2c.h"

s32 func_02074300(M2C_UNK);                         /* extern */
M2C_UNK func_02094a18(s32, M2C_UNK);                /* extern */
s32 func_0209d364(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020fc338;

void func_02094518(M2C_UNK arg0) {
    s32 var_r0;

    var_r0 = func_0209d364(&data_020fc338);
    if (var_r0 == 0) {
        var_r0 = func_02074300(0x6C);
    }
    if (var_r0 == 0) {
        return;
    }
    func_02094a18(var_r0, arg0);
}
