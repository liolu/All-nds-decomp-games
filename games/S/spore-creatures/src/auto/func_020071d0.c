#include "m2c.h"

M2C_UNK func_020ac12c(M2C_UNK, s16 *);              /* extern */
M2C_UNK func_020ac26c(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020071d0(M2C_UNK arg0, void *arg1) {
    s16 sp2;
    s16 sp0;

    func_020ac26c(arg0, arg1, 2);
    sp2 = (s16) M2C_FIELD(arg1, s32 *, 4);
    func_020ac12c(arg0, &sp2);
    sp0 = (s16) M2C_FIELD(arg1, s32 *, 8);
    func_020ac12c(arg0, &sp0);
}
