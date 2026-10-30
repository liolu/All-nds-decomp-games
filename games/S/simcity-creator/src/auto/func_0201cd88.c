#include "m2c.h"

M2C_UNK func_0201cdec();                            /* extern */

void func_0201cd88(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
    func_0201cdec();
}
