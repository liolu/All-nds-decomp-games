#include "m2c.h"

M2C_UNK func_02095df8(s32, void *);                 /* extern */

void *func_020961bc(void *arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 != NULL) {
        temp_r0 = M2C_FIELD(temp_r1, volatile s32 *, 0xC);
        if (temp_r0 != 0) {
            M2C_FIELD(temp_r1, volatile s32 *, 0xC) = (s32) (temp_r0 - 1);
        }
        if (M2C_FIELD(temp_r1, volatile s32 *, 0xC) == 0) {
            func_02095df8(M2C_FIELD(arg0, volatile s32 *, 0), M2C_FIELD(arg0, void **, 4));
        }
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    return arg0;
}
