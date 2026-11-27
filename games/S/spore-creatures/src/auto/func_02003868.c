#include "m2c.h"

M2C_UNK func_02003984();                            /* extern */
M2C_UNK func_02003c40(void *);                      /* extern */

void func_02003868(void *arg0) {
    func_02003984();
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_02003c40(arg0 + 0x14);
}
