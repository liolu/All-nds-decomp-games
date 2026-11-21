#include "m2c.h"

M2C_UNK func_0209563c(M2C_UNK, s32, s32);           /* extern */

void func_02095f9c(M2C_UNK arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, 4);
    if (temp_r2 == NULL) {
        return;
    }
    func_0209563c(arg0, M2C_FIELD(temp_r2, s32 *, 0xC), M2C_FIELD(temp_r2, s32 *, 4));
}
