#include "m2c.h"

s32 func_02005228(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_020052cc(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_0200558c(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_020d3668;

u16 *func_0200ebd0(void) {
    u16 *sp0;

    if (func_02005228(&data_020d3668, &sp0, 0) == 0) {
        return NULL;
    }
    func_0200558c(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_020052cc(&data_020d3668, sp0, 1);
    return NULL;
}
