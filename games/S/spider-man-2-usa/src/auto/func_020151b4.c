/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201a19c(M2C_UNK);                         /* extern */
M2C_UNK func_0201f7e8(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020371a8(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_02157ea4;

void func_020151b4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_ip;
    s32 var_r4;

    var_r4 = func_0203a6cc(0x128);
    if (var_r4 != 0) {
        if (func_0201a19c(arg0) == 0) {
            var_ip = 1;
        } else {
            var_ip = 0;
        }
        var_r4 = func_020371a8(var_r4, arg1, arg2, &data_02157ea4, var_ip);
    }
    func_0201f7e8(arg0, var_r4, 1);
}
