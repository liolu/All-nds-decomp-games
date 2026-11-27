#include "m2c.h"

extern M2C_UNK data_020e0de4;

void func_0204b300(void *arg0) {
    void *var_r1;
    void *var_r2;

    var_r2 = M2C_FIELD(&data_020e0de4, void **, 4);
    if (var_r2 == NULL) {
        M2C_FIELD(&data_020e0de4, void **, 4) = arg0;
        return;
    }
    var_r1 = M2C_FIELD(var_r2, void **, 0x3E8);
    if (var_r1 != NULL) {
        do {
            var_r2 = var_r1;
            var_r1 = M2C_FIELD(var_r1, void **, 0x3E8);
        } while (var_r1 != NULL);
    }
    M2C_FIELD(var_r2, void **, 0x3E8) = arg0;
}
