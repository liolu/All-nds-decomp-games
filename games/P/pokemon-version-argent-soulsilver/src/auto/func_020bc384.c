#include "m2c.h"

M2C_UNK func_020bdd04(M2C_UNK, void *);             /* extern */
extern M2C_UNK func_020bdf94;

void func_020bc384(void *arg0, M2C_UNK arg1) {
    func_020bdd04(arg1, arg0);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_020bdf94;
}
