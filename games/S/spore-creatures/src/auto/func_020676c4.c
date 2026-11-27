#include "m2c.h"

s32 func_020683a4(M2C_UNK);                         /* extern */
M2C_UNK func_0208877c(M2C_UNK *);                   /* extern */
M2C_UNK func_02088798(M2C_UNK *);                   /* extern */
M2C_UNK func_020887cc(M2C_UNK *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_020676c4(M2C_UNK arg0, s32 arg1) {
    u8 sp4[8];

    func_0208877c(sp4);
    func_020887cc(sp4, arg0, func_020683a4(arg0), 2, arg1);
    func_02088798(sp4);
}
