/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0203dd80(M2C_UNK);

void func_020409e4(s32 arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E8) - 0x19;
    switch (temp_r1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            break;
        default:
            func_0203dd80(arg0);
            break;
    }
}
