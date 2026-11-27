#include "m2c.h"

extern M2C_UNK data_020e0de4;

void func_0204b33c(void *arg0) {
    void *var_r1;
    void *var_r3;

    var_r3 = M2C_FIELD(&data_020e0de4, void **, 4);
    if (var_r3 == arg0) {
        M2C_FIELD(&data_020e0de4, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x3E8);
        M2C_FIELD(arg0, void **, 0x3E8)       = NULL;
        return;
    }
    if (var_r3 != NULL) {
        var_r1 = M2C_FIELD(var_r3, void **, 0x3E8);
        if (var_r1 != NULL) {
        loop_6:
            if (var_r1 == arg0) {
                M2C_FIELD(var_r3, void **, 0x3E8) = (void *) M2C_FIELD(var_r1, void **, 0x3E8);
                M2C_FIELD(arg0, void **, 0x3E8)   = NULL;
                return;
            }
            var_r3 = var_r1;
            var_r1 = M2C_FIELD(var_r1, void **, 0x3E8);
            if (var_r1 == NULL) {
                return;
            }
            goto loop_6;
        }
    }
}
