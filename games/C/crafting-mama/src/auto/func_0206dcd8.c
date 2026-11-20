#include "m2c.h"

void func_0206dcd8(void *arg0, s16 *arg1, s16 *arg2) {
    if (arg0 == NULL) {
        return;
    }
    *arg1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s16 *, 8);
    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s16 *, 0xA);
}
