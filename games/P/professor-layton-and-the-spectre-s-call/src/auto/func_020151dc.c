#include "engine.h"
#include "m2c.h"

void func_0201527c(M2C_UNK);
M2C_UNK func_0201732c(void);
void func_02017340(M2C_UNK);

void func_020151dc(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0201732c();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        do {
            func_0201527c(arg0 + 0x9C);
        } while (M2C_FIELD(arg0, s32 *, 0x64) != 2);
    }
    func_02017340(temp_r4);
}
