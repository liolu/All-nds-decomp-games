#include "m2c.h"

s32 func_02070f50(s32);                             /* extern */
s32 func_02080fe4(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_020810fc(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0208c83c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02081094(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02070f50(M2C_FIELD(arg0, s32 *, 0)) == 0) {
        func_020810fc(arg0, arg1, arg2);
        return 1;
    }
    if (func_02080fe4(arg0, arg1, arg2) == 2) {
        func_0208c83c(M2C_FIELD(arg0, s32 *, 4), arg1, arg2, arg3);
    }
    return 0;
}
