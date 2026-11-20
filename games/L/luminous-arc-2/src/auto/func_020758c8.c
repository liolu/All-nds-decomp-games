#include "m2c.h"

M2C_UNK func_02076e74(void *);                      /* extern */

void func_020758c8(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x71) = arg1;
    func_02076e74(arg0 + 0x68);
}
