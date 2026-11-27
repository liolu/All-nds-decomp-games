#include "m2c.h"

void *func_02093480(M2C_UNK);                       /* extern */

void *func_02056a54(void **arg0, s16 arg1) {
    void *temp_r0;

    temp_r0 = func_02093480(0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, void **, 0) = NULL;
        M2C_FIELD(temp_r0, s32 *, 4)   = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        M2C_FIELD(temp_r0, s16 *, 0xC) = arg1;
        M2C_FIELD(temp_r0, s8 *, 0xE)  = 1;
    }
    M2C_FIELD(temp_r0, void **, 0) = (void *) *arg0;
    *arg0                          = temp_r0;
    return temp_r0 + 4;
}
