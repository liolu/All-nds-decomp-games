#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);

extern void *data_02170cc0;

s32 func_02093a30(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02006be0();
    var_r4  = 0;
    if (data_02170cc0 != NULL) {
        var_r4 = M2C_FIELD(data_02170cc0, s32 *, 0x2260);
    }
    func_02006bf4(temp_r0);
    return var_r4;
}
