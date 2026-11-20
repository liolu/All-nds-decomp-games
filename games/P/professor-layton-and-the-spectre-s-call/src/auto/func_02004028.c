#include "engine.h"
#include "m2c.h"

void func_020040b0(M2C_UNK);

void func_02004028(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020040b0(arg0);
}
