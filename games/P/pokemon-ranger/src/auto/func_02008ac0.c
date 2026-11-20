#include "m2c.h"

M2C_UNK func_0200dc84();                            /* extern */
M2C_UNK func_0200edec(void *);                      /* extern */

s32 func_02008ac0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    func_0200dc84(arg0);
    func_0200edec(arg0);
    return 1;
}
