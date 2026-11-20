#include "engine.h"
#include "m2c.h"

void func_02043350(M2C_UNK);
void func_020433b4(M2C_UNK);
void func_020443b4(M2C_UNK);
M2C_UNK func_0200f778(M2C_UNK);

s32 func_02044384(void) {
    s32 temp_r0;

    func_02043350(3);
    temp_r0 = func_0200f778((s32) func_020443b4);
    if (temp_r0 == 2) {
        return 1;
    }
    func_020433b4(temp_r0);
    return 0;
}
