#include "engine.h"
#include "m2c.h"

void func_02006f88(M2C_UNK, M2C_UNK);
M2C_UNK func_02007404(M2C_UNK, M2C_UNK);
void func_020075b0(M2C_UNK);
void func_020152cc(M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

void func_0200806c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r5, s32 *, 0xC) & 4) {
        temp_r4                         = func_0201732c();
        M2C_FIELD(temp_r5, s32 *, 0xC)  = (s32) (M2C_FIELD(temp_r5, s32 *, 0xC) | 8);
        M2C_FIELD(temp_r5, s32 *, 0x14) = arg1;
        func_020152cc((s32) (temp_r5 + 0x18));
        func_02017340(temp_r4);
        return;
    }
    func_02006f88((s32) temp_r5, arg1);
    temp_r0 = func_02007404(arg0, 1);
    if (temp_r0 == 0) {
        return;
    }
    func_020075b0(temp_r0);
}
