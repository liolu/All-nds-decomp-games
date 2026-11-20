#include "engine.h"
#include "m2c.h"

void func_02043350(M2C_UNK);
void func_020433b4(M2C_UNK);
M2C_UNK func_02044328(void);
void func_02044b90(void);

void func_020442f4(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_020433b4((s32) temp_r0);
        func_02044b90();
        return;
    }
    if (func_02044328() != 0) {
        return;
    }
    func_02043350(9);
}
