#include "m2c.h"

void *func_02083a7c(s32);                           /* extern */
extern M2C_UNK (*data_0217032c)(M2C_UNK, void *, s32);

void func_02083b04(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0 = func_02083a7c(arg1);
    data_0217032c(arg0, temp_r0, M2C_FIELD(temp_r0, s32 *, 4) + 0x20);
}
