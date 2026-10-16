#include "engine.h"
#include "m2c.h"

M2C_UNK func_02067278(void);
void func_0206728c(M2C_UNK);

extern M2C_UNK data_020e8cc0;

s32 func_020707a4(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02067278();
    if (M2C_FIELD(&data_020e8cc0, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_020e8cc0, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_0206728c(temp_r0);
    return (s32) var_r4;
}
