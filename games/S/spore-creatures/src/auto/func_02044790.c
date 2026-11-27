#include "m2c.h"

M2C_UNK func_02044800();                            /* extern */

void *func_02044790(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r2 != NULL) {
        M2C_FIELD(arg0, void **, 0x18)   = (void *) M2C_FIELD(temp_r2, void **, 0xC);
        M2C_FIELD(temp_r2, s32 *, 0)     = 0;
        M2C_FIELD(temp_r2, s32 *, 4)     = 0;
        M2C_FIELD(temp_r2, s32 *, 8)     = 0;
        M2C_FIELD(temp_r2, void **, 0xC) = NULL;
        M2C_FIELD(arg0, u16 *, 0x1E)     = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) - 1);
        return temp_r2;
    }
    func_02044800(arg0);
    return func_02044790(arg0);
}
