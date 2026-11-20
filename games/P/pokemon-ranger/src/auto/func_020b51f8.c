#include "m2c.h"

void func_020b51f8(void *arg0) {
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 8);
    if (var_r0 == NULL) {
        return;
    }
    do {
        var_r0 = M2C_FIELD(var_r0, void **, 0xC);
    } while (var_r0 != NULL);
}
