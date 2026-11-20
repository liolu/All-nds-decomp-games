#include "m2c.h"

M2C_UNK func_020293f8(s32 *);                       /* extern */

void func_0207bc7c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if ((arg0 != NULL) && (temp_r0 != 0)) {
        func_020293f8(temp_r0 + 0x28);
        func_020293f8(arg0);
    }
}
