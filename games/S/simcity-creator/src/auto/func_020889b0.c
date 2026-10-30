#include "m2c.h"

s16 func_02080bd4(u16, M2C_UNK);                    /* extern */
s16 func_02080bec(u16, M2C_UNK);                    /* extern */

void func_020889b0(void *arg0, void *arg1, M2C_UNK arg2) {
    M2C_FIELD(arg1, s16 *, 0) = func_02080bec(M2C_FIELD(arg0, u16 *, 0), arg2);
    M2C_FIELD(arg1, s16 *, 2) = func_02080bec(M2C_FIELD(arg0, u16 *, 2), arg2);
    M2C_FIELD(arg1, s16 *, 4) = func_02080bd4(M2C_FIELD(arg0, u16 *, 4), arg2);
    M2C_FIELD(arg1, s16 *, 6) = func_02080bd4(M2C_FIELD(arg0, u16 *, 6), arg2);
}
