#include "m2c.h"

M2C_UNK func_02090bf0(s32);                         /* extern */
s32 func_02090e10(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02096804(void *, M2C_UNK);             /* extern */

void func_02096780(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != arg1) {
        if (temp_r0 != NULL) {
            func_02090bf0(M2C_FIELD(temp_r0, s32 *, 4));
            func_02090bf0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0));
        }
        M2C_FIELD(arg0, void **, 8)  = arg1;
        M2C_FIELD(arg0, s32 *, 0xC)  = func_02090e10(M2C_FIELD(arg1, s32 *, 4), 1, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x10) = func_02090e10(M2C_FIELD(arg1, s32 *, 0), 1, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 4);
    }
    func_02096804(arg0, 0);
}
