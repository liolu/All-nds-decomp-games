#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204d480(M2C_UNK);
void func_0205d6d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0205d6e0(M2C_UNK, M2C_UNK);

void func_0205eba4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) func_0204d480(arg1);
    if (M2C_FIELD(arg0, u16 *, 0x14) == 0) {
        func_0205d6e0(arg0, 2);
        return;
    }
    func_0205d6d0(arg0, 2);
}
