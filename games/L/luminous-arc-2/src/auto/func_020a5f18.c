#include "m2c.h"

M2C_UNK func_020aa89c(s32);                         /* extern */
M2C_UNK func_020a5ba4(void *);                      /* extern */

void func_020a5f18(void *arg0) {
    func_020aa89c(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    func_020a5ba4(arg0 + 0x14);
    func_020a5ba4(arg0 + 8);
}
