#include "m2c.h"

M2C_UNK func_0203a1ac(u8);                          /* extern */

void func_0202e5b4(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        func_0203a1ac(M2C_FIELD(arg0, u8 *, 0x3C));
        M2C_FIELD(arg0, u8 *, 0x2E) = arg1;
    }
}
