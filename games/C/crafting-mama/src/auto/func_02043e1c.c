#include "m2c.h"

void *func_0202f698(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_02031700();                                /* extern */
s32 func_0203663c(s32);                             /* extern */
M2C_UNK func_0205d6d0(void *, M2C_UNK);             /* extern */

void *func_02043e1c(M2C_UNK arg0, s32 arg1, s32 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = func_0203663c(arg7);
    if (func_02031700() == 0) {
        return NULL;
    }
    temp_r0 = func_0202f698(temp_r4, 0, 0, arg0, arg1, arg2, arg6, -1, -1, 0);
    func_0205d6d0(temp_r0, 3);
    M2C_FIELD(temp_r0, s16 *, 0x14) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x10) = (s16) arg4;
    M2C_FIELD(temp_r0, s16 *, 0x12) = (s16) arg5;
    return temp_r0;
}
