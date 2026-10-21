#include "m2c.h"

M2C_UNK func_020075b0(void *, M2C_UNK, s32);        /* extern */
s32 func_02011120(void *, s32, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02018404(void *, s32);                 /* extern */
s32 func_0207e5c8();                                /* extern */
extern void *data_02170260;

s32 func_0207e5d4(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r0;

    if (arg1 == 0) {
        return -1;
    }
    data_02170260 = arg0;
    func_020075b0(data_02170260, 0, func_0207e5c8());
    M2C_FIELD(data_02170260, s32 *, 0x1A90) = 0;
    M2C_FIELD(data_02170260, s16 *, 0x1A94) = 0;
    func_02018404(data_02170260 + 0x1A96, 0xA001);
    var_r0 = func_02011120(data_02170260, arg1, arg2, arg3);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
