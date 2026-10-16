#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

extern M2C_UNK data_020369dc;

s32 func_0201c654(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0201732c();
    if (M2C_FIELD(&data_020369dc, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_020369dc, void **, 4), s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    func_02017340(temp_r0);
    return (s32) (u16) var_r4;
}
