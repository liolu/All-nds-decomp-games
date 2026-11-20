#include "engine.h"
#include "m2c.h"

void func_02043350(M2C_UNK);

void func_020443e8(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_02043350(0xA);
        return;
    }
    func_02043350(0);
}
