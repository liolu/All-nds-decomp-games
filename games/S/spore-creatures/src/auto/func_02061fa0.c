#include "m2c.h"

s32 func_02061fa0(void *arg0) {
    void *var_r0;
    void *var_r1;

    var_r1 = M2C_FIELD(arg0, void **, 0x24);
    var_r0 = var_r1;
    if (var_r1 != NULL) {
        var_r0 = var_r1 - 0x20;
    }
    if (var_r0 == NULL) {
        return 0;
    }
    if (var_r1 != NULL) {
        var_r1 -= 0x20;
    }
    return (s32) M2C_FIELD(var_r1, s32 *, 0x674) >> 0xC;
}
