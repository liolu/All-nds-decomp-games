#include "engine.h"
#include "m2c.h"

M2C_UNK func_02019d04(void);
void func_02019d18(M2C_UNK);

extern M2C_UNK data_020960dc;

s32 func_02022dd4(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02019d04();
    if (M2C_FIELD(&data_020960dc, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_020960dc, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_02019d18(temp_r0);
    return (s32) var_r4;
}
