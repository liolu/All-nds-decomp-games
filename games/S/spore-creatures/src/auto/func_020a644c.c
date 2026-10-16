#include "m2c.h"

M2C_UNK func_020934bc(s32);                         /* extern */

void *func_020a644c(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 8) > 1U) {
        func_020934bc(M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
