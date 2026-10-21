#include "m2c.h"

M2C_UNK func_0204f0fc();                            /* extern */
M2C_UNK func_02050938(void *);                      /* extern */

void func_02050b28(void *arg0) {
    func_0204f0fc();
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    func_02050938(arg0);
}
