#include "m2c.h"

void *func_02049964(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_0205fa30();                                /* extern */

void *func_020499fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_02049964(arg0, arg1, arg2, 1, 8, 0x4AB67CD9);
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s32 *, 0x20)                           = func_0205fa30();
    M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x28), s16 *, 0x1E) = 0;
    return temp_r0;
}
