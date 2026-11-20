#include "m2c.h"

s32 func_02065ef8(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_02065e44(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_02066304(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_020e8cc8;

u16 *func_02070160(void) {
    u16 *sp0;

    if (func_02065ef8(&data_020e8cc8, &sp0, 0) == 0) {
        return NULL;
    }
    func_02066304(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02065e44(&data_020e8cc8, sp0, 1);
    return NULL;
}
