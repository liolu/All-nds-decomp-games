#include "engine.h"
#include "m2c.h"

void func_020d2084(M2C_UNK);

void func_020d34b4(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2084(0xA);
        return;
    }
    func_020d2084(0);
}
