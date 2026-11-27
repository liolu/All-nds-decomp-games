#include "m2c.h"

M2C_UNK func_020482e8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02048424(M2C_UNK *, void *);           /* extern */
M2C_UNK func_ov006_0215aa4c(M2C_UNK *);             /* extern */

s32 func_020482a4(void *arg0, M2C_UNK arg1) {
    u8 sp0[8];

    func_02048424(sp0, arg0);
    func_ov006_0215aa4c(sp0);
    M2C_FIELD(arg0, s8 *, 0x194) = 1;
    func_020482e8(arg0, arg1);
    return 1;
}
