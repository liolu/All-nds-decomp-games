#include "m2c.h"

M2C_UNK func_02028b50(M2C_UNK, void *);             /* extern */
extern M2C_UNK func_02028de0;

void func_020271d0(void *arg0, M2C_UNK arg1) {
    func_02028b50(arg1, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_02028de0;
}
