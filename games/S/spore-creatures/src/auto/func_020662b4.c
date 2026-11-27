#include "m2c.h"

s32 func_02066200();                                /* extern */
M2C_UNK func_0206644c(void *, void *, void *);      /* extern */

void func_020662b4(void *arg0) {
    if (func_02066200() == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) == -0x1000) {
        return;
    }
    func_0206644c(arg0, arg0 + 0x28, arg0 + 0x34);
}
