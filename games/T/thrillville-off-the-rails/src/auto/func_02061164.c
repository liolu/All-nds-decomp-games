#include "m2c.h"

s32 func_02061234();                                /* extern */
M2C_UNK func_02061764(s32, M2C_UNK **);             /* extern */
s32 func_020742ec(M2C_UNK);                         /* extern */
extern M2C_UNK data_020e1850;
extern s32 data_020f01bc;

M2C_UNK **func_02061164(M2C_UNK **arg0) {
    s32 var_r0;

    *arg0 = &data_020e1850;
    if (data_020f01bc == 0) {
        var_r0 = func_020742ec(0x30);
        if (var_r0 != 0) {
            var_r0 = func_02061234();
        }
        data_020f01bc = var_r0;
    }
    func_02061764(data_020f01bc, arg0);
    return arg0;
}
