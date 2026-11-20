#include "m2c.h"

M2C_UNK func_0203a77c(M2C_UNK, s32, s32);           /* extern */
s32 func_0203a918();                                /* extern */
M2C_UNK func_0203c3dc(M2C_UNK);                     /* extern */
extern M2C_UNK data_020aab34;

s32 func_0203e09c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (func_0203a918() != 0)) {
        return 0;
    }
    if (arg2 == 0) {
        func_0203a77c(arg0, M2C_FIELD(&data_020aab34, s32 *, 0x68), M2C_FIELD(&data_020aab34, s32 *, 0x6C));
        func_0203c3dc(arg0);
    }
    return 1;
}
