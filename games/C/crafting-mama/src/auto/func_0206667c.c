#include "m2c.h"

extern void *data_020ca030;

void func_0206667c(s16 arg0) {
    s16 var_r0;

    var_r0 = arg0;
    if (data_020ca030 == NULL) {
        return;
    }
    M2C_FIELD(M2C_FIELD(data_020ca030, void **, 0x34), s16 *, 0x1E) = var_r0;
    if ((s32) var_r0 >= 0x14) {
        var_r0 = 0x14;
    }
    M2C_FIELD(M2C_FIELD(data_020ca030, void **, 0x30), s16 *, 0x1E) = var_r0;
}
