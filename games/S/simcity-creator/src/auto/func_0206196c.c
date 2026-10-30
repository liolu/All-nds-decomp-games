#include "m2c.h"

s32 func_02022f40(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_02023028(s32);                         /* extern */
s32 func_02023064(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_020622fc(s32, s32, M2C_UNK);           /* extern */
s32 func_0206bbf0(s32);                             /* extern */

void func_0206196c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = func_0206bbf0(M2C_FIELD(arg0, s32 *, 4));
    temp_r0 = func_020348ec(8);
    var_r5  = temp_r0;
    if (var_r5 != 0) {
        var_r5 = func_02022f40(temp_r0, temp_r4, arg1);
    }
    func_020622fc(temp_r4, func_02023064(var_r5, 4, 0), 0x4E00);
    if (var_r5 == 0) {
        return;
    }
    func_02023028(var_r5);
    func_0203491c(var_r5);
}
