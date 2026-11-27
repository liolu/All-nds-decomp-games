#include "m2c.h"

s32 func_02005700(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_0200613c(s32, s32);                        /* extern */
s32 func_02006568(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0200659c(M2C_UNK *, M2C_UNK, s32);         /* extern */
s32 func_0202e258(void *, M2C_UNK);                 /* extern */
void *func_020ac3a4(M2C_UNK);                       /* extern */
extern M2C_UNK data_020e0bcc;

s32 func_0200575c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 var_r0;
    void *temp_r5;

    if (func_02005700(arg2, func_0200659c(&data_020e0bcc, arg0, func_02006568(&data_020e0bcc, arg0, arg1)), arg3) != 0) {
        temp_r5 = func_020ac3a4(arg2);
        temp_r4 = func_0200613c(func_020ac3a4(arg2) + 8, M2C_FIELD(temp_r5, s32 *, 8) - 8);
        if ((func_0202e258(temp_r5, arg0) == 0) && (M2C_FIELD(temp_r5, s32 *, 0) == temp_r4)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
