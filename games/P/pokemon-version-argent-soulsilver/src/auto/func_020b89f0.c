#include "m2c.h"

M2C_UNK func_020b89b8(void *);                      /* extern */

void func_020b89f0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    func_020b89b8(arg0 + 0xC);
}
