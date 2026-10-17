/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */
s32 func_02033f80(void *, void *);                  /* extern */
M2C_UNK func_02041a6c(void *, s32);                 /* extern */
s32 func_02041a7c();                                /* extern */
extern M2C_UNK data_0207fa28;
extern s32 data_020c39bc;

s32 func_0203b7f0(void *arg0, void *arg1) {
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r7;

    var_r7  = 0;
    temp_r6 = func_02041a7c();
    if ((M2C_FIELD(arg1, s32 *, 4) == 7) && (M2C_FIELD(arg0, s32 *, 0x1EC) == 0) && (temp_r6 >= 0)) {
        func_02041a6c(arg0, temp_r6 - 1);
        if ((temp_r6 - 1) == 0) {
            func_02002720(&data_0207fa28);
        } else {
            temp_r6_2 = data_020c39bc;
            if (temp_r6_2 != 0) {
                func_020242d4(func_02024654(), temp_r6_2, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x1EC) = 0x30;
        }
        var_r7 = 1;
    }
    if ((var_r7 != 0) || (func_02033f80(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}
