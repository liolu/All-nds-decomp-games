#include "engine.h"
#include "m2c.h"

void func_02012844(M2C_UNK, M2C_UNK);
M2C_UNK func_0201cfdc(M2C_UNK);

extern M2C_UNK data_020348d0;

s32 func_020123b0(void) {
    s32 var_r4;

    var_r4 = func_0201cfdc(M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0xC), s32 *, 0x508));
    func_02012844(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
