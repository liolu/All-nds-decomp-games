#include "engine.h"
#include "m2c.h"

void func_0201527c(M2C_UNK);
M2C_UNK func_02015b04(M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

extern M2C_UNK data_020349e0;

void func_02015a5c(s32 arg0) {
    s32 temp_r5;
    void *temp_r6;

    temp_r5 = func_0201732c();
    temp_r6 = M2C_FIELD(&data_020349e0, void **, 4);
loop_1:
    if (func_02015b04(arg0) == 0) {
        M2C_FIELD(temp_r6, s32 *, 0x84) = arg0;
        func_0201527c(arg0);
        M2C_FIELD(temp_r6, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_02017340(temp_r5);
}
