#include "m2c.h"

M2C_UNK func_02028f40(s32, void *);                 /* extern */
void *func_02028fa0(s32, M2C_UNK);                  /* extern */
M2C_UNK func_0202624c(s32);                         /* extern */
extern M2C_UNK data_0216a444;

s32 func_020256e4(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_0216a444;
    temp_r0 = func_02028fa0(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_02028f40(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_0202624c(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
