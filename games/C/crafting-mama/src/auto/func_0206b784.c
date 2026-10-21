#include "m2c.h"

void func_0206b784(void *arg0, s16 *arg1, s16 *arg2) {
    if (arg0 == NULL) {
        return;
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s16 *, 0x24);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s16 *, 0x26);
    }
}
