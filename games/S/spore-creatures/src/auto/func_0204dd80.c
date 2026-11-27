#include "m2c.h"

M2C_UNK func_0208a70c(s32);                         /* extern */

void func_0204dd80(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 0x3B0);
    if (var_r1 != 0) {
        var_r1 -= 4;
    }
    if (var_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & ~0x400000);
    var_r0                       = M2C_FIELD(arg0, s32 *, 0x3B0);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    func_0208a70c(var_r0);
}
