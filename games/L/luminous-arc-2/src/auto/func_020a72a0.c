#include "m2c.h"

void *func_020ab2dc(M2C_UNK);                       /* extern */
M2C_UNK func_020a5e80(void *, s32, s32, s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_020a7f90(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, void *); /* extern */
extern s32 data_02173ca4;
extern M2C_UNK func_020a6fec;
extern M2C_UNK func_020a71e4;

void *func_020a72a0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    void *temp_r0;

    if ((arg6 == 0) && (data_02173ca4 != 1)) {
        return NULL;
    }
    temp_r0 = func_020ab2dc(0x840);
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s32 *, 0x838) = arg7;
    M2C_FIELD(temp_r0, s32 *, 0x83C) = arg8;
    M2C_FIELD(temp_r0, s32 *, 0x82C) = 0;
    func_020a7f90(temp_r0 + 0x4C, arg0, arg1, arg2, arg3, arg6, &func_020a6fec, temp_r0);
    func_020a5e80(temp_r0, arg4, arg5, arg6, &func_020a71e4, temp_r0);
    return temp_r0;
}
