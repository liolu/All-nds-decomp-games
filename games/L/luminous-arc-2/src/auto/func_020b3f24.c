#include "m2c.h"

M2C_UNK func_020ab30c(s32);                         /* extern */

void func_020b3f24(void *arg0) {
    func_020ab30c(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_020ab30c(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
