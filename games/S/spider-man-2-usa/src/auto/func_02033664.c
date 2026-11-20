/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02032f0c(s32, M2C_UNK);                /* extern */
s32 func_020337f0(s32, s32);                        /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern s32 data_0215d690;
extern s32 data_0215d694;

void func_02033664(M2C_UNK arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg1 != 0) {
        var_r0 = func_0203a6cc(0x44);
        if (var_r0 != 0) {
            var_r0 = func_020337f0(var_r0, arg1);
        }
        data_0215d694 = var_r0;
        func_02032f0c(var_r0, arg0);
        return;
    }
    var_r0_2 = func_0203a6cc(0x44);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020337f0(var_r0_2, arg1);
    }
    data_0215d690 = var_r0_2;
    func_02032f0c(var_r0_2, arg0);
}
