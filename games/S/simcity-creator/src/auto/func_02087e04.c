#include "m2c.h"

u16 func_02080bd4();                    /* extern */
u16 func_02080bec();                    /* extern */

void func_02087e04(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, u16 *, 0) = func_02080bec(M2C_FIELD(arg0, u16 *, 0));
    M2C_FIELD(arg0, u16 *, 2) = func_02080bec(M2C_FIELD(arg0, u16 *, 2), arg1);
    M2C_FIELD(arg0, u16 *, 4) = func_02080bd4(M2C_FIELD(arg0, u16 *, 4), arg1);
    M2C_FIELD(arg0, u16 *, 6) = func_02080bd4(M2C_FIELD(arg0, u16 *, 6), arg1);
}
