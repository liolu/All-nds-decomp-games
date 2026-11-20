#include "m2c.h"

s32 func_02005abc(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020956bc(void *);                      /* extern */

void func_02095368(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_02005abc(0, -1, 0x200);
    M2C_FIELD(arg0, s32 *, 8) = func_02005abc(0, -1, 0x20000);
    func_020956bc(arg0);
}
