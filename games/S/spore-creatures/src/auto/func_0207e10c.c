#include "m2c.h"

M2C_UNK func_02073b4c(void *);                      /* extern */

void func_0207e10c(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x26) = 0;
    func_02073b4c(M2C_FIELD(arg0, void **, 4));
}
