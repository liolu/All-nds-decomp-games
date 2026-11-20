#include "engine.h"
#include "m2c.h"

void func_020d2084(M2C_UNK);
void func_020d2104(M2C_UNK);

void func_020d27fc(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_020d2104((s32) temp_r0);
        return;
    }
    func_020d2084(1);
}
