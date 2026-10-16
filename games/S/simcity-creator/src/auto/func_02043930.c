#include "engine.h"
#include "m2c.h"

void func_02043350(M2C_UNK);
void func_020433b4(M2C_UNK);
void func_02043960(M2C_UNK);
M2C_UNK func_0200ffb0(M2C_UNK);

s32 func_02043930(void) {
    s32 temp_r0;

    func_02043350(3);
    temp_r0 = func_0200ffb0((s32) func_02043960);
    if (temp_r0 == 2) {
        return 1;
    }
    func_020433b4(temp_r0);
    return 0;
}
