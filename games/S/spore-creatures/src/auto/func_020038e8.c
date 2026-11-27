#include "m2c.h"

M2C_UNK func_02003a88(void *, void *, M2C_UNK);     /* extern */
void *func_02003cb0(s32);                           /* extern */

void func_020038e8(void *arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0                      = func_02003cb0(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_02003a88(arg0, temp_r0, arg2);
}
