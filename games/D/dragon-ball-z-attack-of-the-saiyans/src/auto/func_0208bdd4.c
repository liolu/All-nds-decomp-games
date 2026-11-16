#include "m2c.h"

M2C_UNK func_02086190(u8);                          /* extern */

void func_0208bdd4(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        func_02086190(M2C_FIELD(arg0, u8 *, 0x3C));
        M2C_FIELD(arg0, u8 *, 0x2E) = arg1;
    }
}
