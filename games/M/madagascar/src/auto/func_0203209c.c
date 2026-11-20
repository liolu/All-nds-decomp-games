/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002474(void *, s32, M2C_UNK);        /* extern */
s32 func_020325c8(s32, s32, M2C_UNK);               /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern s32 data_020cf83c;

void func_0203209c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r1;

    if (arg1 != 0) {
        temp_r0 = func_0207b068(0x138);
        var_r1  = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_020325c8(temp_r0, M2C_FIELD(arg0, s32 *, 0x30), 1);
        }
        func_02002474(arg0, var_r1, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1 * M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    data_020cf83c                = 0;
}
