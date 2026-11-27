#include "m2c.h"

M2C_UNK func_020ac12c(M2C_UNK, s16 *);              /* extern */

void func_02007190(M2C_UNK arg0, void *arg1) {
    s16 sp0;

    sp0 = (s16) M2C_FIELD(arg1, s32 *, 4);
    func_020ac12c(arg0, &sp0);
}
