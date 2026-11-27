#include "m2c.h"

M2C_UNK func_02073da0(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void func_02073e38(void *arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r4 == NULL) {
        return;
    }
    if (arg1 >= 3) {
        if (temp_r4 != NULL) {
            func_02073da0(temp_r4);
            func_020934a8(temp_r4);
        }
        M2C_FIELD(arg0, void **, 0xC) = NULL;
        M2C_FIELD(arg0, s32 *, 0)     = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4)     = 0;
        M2C_FIELD(arg0, s8 *, 0x4C)   = 0;
        return;
    }
    func_02073e38(temp_r4, arg1 + 1);
}
