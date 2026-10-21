/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bd920(M2C_UNK);

void func_020c08a8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x11C);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x11C) != 0) {
        return;
    }
    func_020bd920(arg0);
}
