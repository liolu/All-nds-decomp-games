/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02003d10(void *arg0, u32 arg1) {
    u32 temp_r1;
    void *temp_r2;

    M2C_FIELD(arg0, u32 *, 0xC) = arg1;
    temp_r1                     = M2C_FIELD(arg0, u32 *, 0xC);
    switch (temp_r1) {
        default:
            break;
        case 0:
        case 2:
        case 3:
        case 5:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0) = 0;
            break;
        case 1:
        case 4:
            temp_r2                      = M2C_FIELD(arg0, void **, 0x18);
            M2C_FIELD(temp_r2, s32 *, 0) = (s32) ((M2C_FIELD(M2C_FIELD(temp_r2, void **, 8), u16 *, 4) << 0xC) - 1);
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
}
