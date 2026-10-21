#include "m2c.h"

M2C_UNK func_0205e6a8(s32);                         /* extern */

void func_0204962c(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 == NULL) {
        return;
    }
    func_0205e6a8(temp_r4 + 0x20);
    M2C_FIELD(temp_r4, s32 *, 0x10) = 1;
    *arg0                           = NULL;
}
