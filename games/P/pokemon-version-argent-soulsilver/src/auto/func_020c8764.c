#include "m2c.h"

M2C_UNK func_020b4cb4(s32, void *);                 /* extern */
void *func_020b4d14(s32, M2C_UNK);                  /* extern */
M2C_UNK func_020c9a94(s32);                         /* extern */
extern M2C_UNK data_021dfde4;

s32 func_020c8764(s32 arg0, void *arg1) {
    s32 temp_r5;
    void *temp_r0;

    temp_r5 = (arg0 * 0x24) + (s32) &data_021dfde4;
    temp_r0 = func_020b4d14(temp_r5 + 0xC, 0);
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020b4cb4(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    func_020c9a94(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
