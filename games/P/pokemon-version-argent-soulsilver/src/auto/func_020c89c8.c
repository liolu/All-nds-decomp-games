#include "m2c.h"

M2C_UNK func_020b4cb4(s32, void *);                 /* extern */
M2C_UNK func_020c9a7c();                            /* extern */
extern M2C_UNK data_021dfde4;

void func_020c89c8(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    func_020c9a7c();
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020b4cb4((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_021dfde4 + 0xC, arg0);
}
