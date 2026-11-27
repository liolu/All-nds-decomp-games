#include "m2c.h"

M2C_UNK func_020a3690(void *, void *, void *);      /* extern */

void func_020a3620(void *arg0) {
    void *temp_r1;
    void *temp_r3;
    void *var_r2;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    temp_r3 = temp_r1 + M2C_FIELD(temp_r1, u16 *, 0xC);
    if (M2C_FIELD(temp_r1, u16 *, 0xE) == 1) {
        if (M2C_FIELD(temp_r1, s32 *, 0) == 0x30585442) {
            var_r2 = temp_r1 + M2C_FIELD(temp_r3, s32 *, 0);
        } else {
            var_r2 = NULL;
        }
    } else {
        var_r2 = temp_r1 + M2C_FIELD(temp_r3, s32 *, 4);
    }
    func_020a3690(arg0, temp_r1, var_r2);
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) (M2C_FIELD(arg0, u16 *, 0x12) & ~0x20);
}
