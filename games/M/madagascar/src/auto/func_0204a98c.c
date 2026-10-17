/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204a98c(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x14) != 0xCC) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1A4), M2C_UNK(**)(), 0)(arg0);
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0xCC;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1A4), s32 *, 8) != 0) {
        do {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x30;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
        } while (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1A4), s32 *, 8) != 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        var_r0 = 0xCE;
    } else {
        var_r0 = 0xCD;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0;
    return 1;
}
