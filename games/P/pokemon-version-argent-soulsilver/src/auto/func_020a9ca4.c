#include "m2c.h"

M2C_UNK func_020a86cc(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020a979c(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_020a9a78(void *);                      /* extern */
M2C_UNK func_020a9ad8(void *);                      /* extern */

void func_020a9ca4(void *arg0, M2C_UNK arg1) {
    func_020a979c(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x81C));
    func_020a9a78(arg0);
    func_020a86cc(arg0, 0, 0);
    func_020a9ad8(arg0);
    M2C_FIELD(arg0, s8 *, 0x455) = 5;
}
