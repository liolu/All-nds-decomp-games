#include "m2c.h"

M2C_UNK func_020a9f50(void *, s32);                 /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */

void func_020aa020(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
        do {
            func_020a9f50(arg0, var_r4);
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0));
    }
    func_020ab30c(M2C_FIELD(arg0, void **, 0x14));
    func_020ab30c(arg0);
}
