/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020efe68;

void func_020a660c(void) {
    s32 var_r2;
    void *var_r1;

    var_r2 = 0;
    var_r1 = M2C_FIELD(&data_020efe68, void **, 0x67C);
    if (var_r1 == NULL) {
        return;
    }
    do {
        M2C_FIELD(var_r1, s32 *, 0x24) = var_r2;
        M2C_FIELD(var_r1, s32 *, 0x20) = 0;
        var_r1                         = M2C_FIELD(var_r1, void **, 0x6C);
        var_r2 += 1;
    } while (var_r1 != NULL);
}
