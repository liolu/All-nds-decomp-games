#include "m2c.h"

M2C_UNK func_0201a420(void *, M2C_UNK, s32);        /* extern */

void func_0201a400(void *arg0, M2C_UNK arg1) {
    s32 *temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 **, 0xC);
    if (temp_r2 == NULL) {
        return;
    }
    func_0201a420(arg0, arg1, *temp_r2);
}
