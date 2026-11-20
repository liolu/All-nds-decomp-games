#include "engine.h"
#include "m2c.h"

M2C_UNK func_02019d04(void);
void func_02019d18(M2C_UNK);

extern M2C_UNK data_020960dc;

s32 func_02022e04(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02019d04();
    if (M2C_FIELD(&data_020960dc, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_020960dc, void **, 4), s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    func_02019d18(temp_r0);
    return (s32) (u16) var_r4;
}
