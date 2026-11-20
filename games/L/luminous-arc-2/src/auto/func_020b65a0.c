#include "m2c.h"

M2C_UNK func_020ab30c(void *);                      /* extern */

void func_020b65a0(void *arg0) {
    func_020ab30c(M2C_FIELD(arg0, void **, 0xC));
    M2C_FIELD(arg0, void **, 0xC) = NULL;
    func_020ab30c(M2C_FIELD(arg0, void **, 8));
    M2C_FIELD(arg0, void **, 8) = NULL;
    func_020ab30c(arg0);
}
