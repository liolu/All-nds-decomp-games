/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0202fad0(M2C_UNK);

void func_020303f0(s32 arg0, s32 arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 2) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1EC);
    if (temp_r1 == 4) {
        return;
    }
    if (temp_r1 == 3) {
        return;
    }
    func_0202fad0(arg0);
}
