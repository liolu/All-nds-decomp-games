#include "m2c.h"

M2C_UNK func_02026ca4(M2C_UNK, void *);             /* extern */
extern M2C_UNK func_02026e1c;

void func_02025280(void *arg0, M2C_UNK arg1) {
    func_02026ca4(arg1, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_02026e1c;
}
