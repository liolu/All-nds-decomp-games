#include "m2c.h"

M2C_UNK func_02028fe0(s32, s32, s32, void *);       /* extern */

void func_02028f00(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0) {
        var_r1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + var_r1);
    func_02028fe0(var_r1, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), arg0 + 0x10);
}
