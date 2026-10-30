#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02029440(s32);                         /* extern */

void *func_02023028(void *arg0) {
    func_02029440(M2C_FIELD(arg0, s32 *, 4));
    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 4));
    return arg0;
}
