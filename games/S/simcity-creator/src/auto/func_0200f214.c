#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);

extern M2C_UNK data_020d3660;

s32 func_0200f214(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_020066e0();
    if (M2C_FIELD(&data_020d3660, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_020d3660, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_020066f4(temp_r0);
    return (s32) var_r4;
}
