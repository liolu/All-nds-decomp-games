#include "m2c.h"

M2C_UNK func_0208640c(M2C_UNK *, void *, s32 *, s32 *); /* extern */

void *func_020861b4(void *arg0) {
    M2C_UNK sp8;
    s32 sp4;
    s32 sp0;

    sp0 = arg0 + 4;
    sp4 = M2C_FIELD(arg0, s32 *, 8);
    func_0208640c(&sp8, arg0, &sp4, &sp0);
    return arg0;
}
