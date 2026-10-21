#include "engine.h"
#include "m2c.h"

void func_020d2084(M2C_UNK);
void func_020d2104(M2C_UNK);
void func_020d33a8(M2C_UNK);
M2C_UNK func_02011bc4(M2C_UNK);

s32 func_020d3378(void) {
    s32 temp_r0;

    func_020d2084(3);
    temp_r0 = func_02011bc4((s32) func_020d33a8);
    if (temp_r0 == 2) {
        return 1;
    }
    func_020d2104(temp_r0);
    return 0;
}
