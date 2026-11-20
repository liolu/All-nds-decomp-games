#include "m2c.h"

s32 func_020056cc(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_02005770(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_02005aac(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_0214a2a8;

u16 *func_020101f8(void) {
    u16 *sp0;

    if (func_020056cc(&data_0214a2a8, &sp0, 0) == 0) {
        return NULL;
    }
    func_02005aac(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02005770(&data_0214a2a8, sp0, 1);
    return NULL;
}
