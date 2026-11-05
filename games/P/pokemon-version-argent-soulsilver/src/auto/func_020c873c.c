#include "m2c.h"

M2C_UNK func_020d50ac(u8);                          /* extern */

void func_020c873c(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        func_020d50ac(M2C_FIELD(arg0, u8 *, 0x3C));
        M2C_FIELD(arg0, u8 *, 0x2E) = arg1;
    }
}
