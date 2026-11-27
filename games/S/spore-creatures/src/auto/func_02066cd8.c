#include "m2c.h"

M2C_UNK func_02066c94(s32 *, s32);                  /* extern */
M2C_UNK func_02067f90(s32 *);                       /* extern */
s32 func_02088554();                                /* extern */
M2C_UNK func_02088694(s32, s32, M2C_UNK);           /* extern */
s32 func_020886e8();                                /* extern */
s32 func_02089df8();                                /* extern */

s32 func_02066cd8(void) {
    s32 sp4;
    s32 sp0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    func_02088554();
    if (func_020886e8() == 0) {
        var_r1 = 0x18;
    } else {
        func_02088554();
        var_r1 = func_02089df8();
    }
    func_02066c94(&sp4, var_r1);
    func_02067f90(&sp0);
    if (sp4 != sp0) {
        func_02088694(func_02088554(), sp4 >> 0xC, 0);
        var_r4 = 1;
    }
    return var_r4;
}
