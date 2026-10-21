#include "m2c.h"

M2C_UNK func_0203001c(M2C_UNK);                     /* extern */
M2C_UNK func_02049120(void *);                      /* extern */

void func_020490f8(void *arg0) {
    func_0203001c(1);
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    func_02049120(arg0);
}
