#include "m2c.h"

extern void *data_020e0e38;

void func_020565e4(void *arg0) {
    void *var_r1;
    void *var_r3;

    var_r3 = data_020e0e38;
    if (var_r3 == arg0) {
        data_020e0e38                  = M2C_FIELD(arg0, void **, 0x80);
        M2C_FIELD(arg0, void **, 0x80) = NULL;
        return;
    }
    if (var_r3 != NULL) {
        var_r1 = M2C_FIELD(var_r3, void **, 0x80);
        if (var_r1 != NULL) {
        loop_6:
            if (var_r1 == arg0) {
                M2C_FIELD(var_r3, void **, 0x80) = (void *) M2C_FIELD(var_r1, void **, 0x80);
                M2C_FIELD(arg0, void **, 0x80)   = NULL;
                return;
            }
            var_r3 = var_r1;
            var_r1 = M2C_FIELD(var_r1, void **, 0x80);
            if (var_r1 == NULL) {
                return;
            }
            goto loop_6;
        }
    }
}
