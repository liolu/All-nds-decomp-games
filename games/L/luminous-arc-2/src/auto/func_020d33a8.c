#include "engine.h"
#include "m2c.h"

void func_020d2084(M2C_UNK);
void func_020d2104(M2C_UNK);
M2C_UNK func_020d33dc(void);
void func_020d3db8(void);

void func_020d33a8(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_020d2104((s32) temp_r0);
        func_020d3db8();
        return;
    }
    if (func_020d33dc() != 0) {
        return;
    }
    func_020d2084(9);
}
