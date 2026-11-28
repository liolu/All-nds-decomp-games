#include "m2c.h"

M2C_UNK func_0206f02c(void *, s32);                 /* extern */
M2C_UNK func_02074314(s32);                         /* extern */

void *func_020b4244(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0206f02c(arg0, M2C_FIELD(arg0, s32 *, 4));
        func_02074314(M2C_FIELD(arg0, s32 *, 0));
    }
    return arg0;
}
