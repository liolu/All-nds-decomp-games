#include "m2c.h"

void func_0205e30c(void *arg0, s16 arg1) {
    if ((arg0 == NULL) && (M2C_FIELD(arg0, void **, 0x28) != NULL)) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s16 *, 0x18) = arg1;
}
