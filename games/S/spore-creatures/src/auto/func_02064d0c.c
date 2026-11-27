#include "m2c.h"

M2C_UNK func_02084e24(void *, s32);                 /* extern */
M2C_UNK func_02084e4c(void *);                      /* extern */

void func_02064d0c(s32 *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    *arg0  = var_r1;
    if (var_r1 == -1) {
        return;
    }
    if (var_r1 <= 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x7F) {
        var_r1 = 0x7F;
    }
    *arg0 = var_r1;
    func_02084e4c(((s8 *) arg0 + 0x18));
    func_02084e24(((s8 *) arg0 + 0x18), *arg0);
}
