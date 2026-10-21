#include "m2c.h"

M2C_UNK func_020aa638(s32, s32);                    /* extern */
s32 func_020b6284(void **, M2C_UNK, s32 *);         /* extern */

void func_020b63d0(void **arg0, M2C_UNK arg1) {
    s32 sp0;
    void *temp_r4;

    temp_r4 = *arg0;
    if (func_020b6284(arg0, arg1, &sp0) == 0) {
        return;
    }
    func_020aa638(M2C_FIELD(temp_r4, s32 *, 0x5C8), sp0);
}
