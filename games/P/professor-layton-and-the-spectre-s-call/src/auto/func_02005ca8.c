#include "engine.h"
#include "m2c.h"

void func_020152cc(M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

void func_02005ca8(s32 arg0) {
    M2C_UNK (*temp_r5)(s32);
    s32 temp_r4;
    s32 temp_r6;

    temp_r5                   = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x4EC);
    temp_r6                   = M2C_FIELD(arg0, s32 *, 0x4F0);
    temp_r4                   = func_0201732c();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~0x4C);
    func_020152cc(arg0 + 0x4F4);
    func_02017340(temp_r4);
    if (temp_r5 == NULL) {
        return;
    }
    temp_r5(temp_r6);
}
