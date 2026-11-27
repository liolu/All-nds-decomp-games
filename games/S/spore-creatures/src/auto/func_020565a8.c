#include "m2c.h"

extern void *data_020e0e38;

void func_020565a8(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = data_020e0e38;
    if (var_r2 == NULL) {
        data_020e0e38 = arg0;
        return;
    }
    var_r1 = M2C_FIELD(var_r2, void **, 0x80);
    if (var_r1 != NULL) {
        do {
            var_r2 = var_r1;
            var_r1 = M2C_FIELD(var_r1, void **, 0x80);
        } while (var_r1 != NULL);
    }
    M2C_FIELD(var_r2, void **, 0x80) = arg0;
}
