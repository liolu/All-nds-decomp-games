/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204a98c(void *);                          /* extern */
M2C_UNK func_0204ad38();                            /* extern */

s32 func_0204aa20(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 0xCA) {
        func_0204ad38(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            M2C_FIELD(arg0, s32 *, 0x14) = 0xCF;
            return 1;
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0xCB;
        goto block_4;
    }
block_4:
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0 == 0xCB) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B4), s32 *, 0x10) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x30;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
    } else if (temp_r0 != 0xCC) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x14;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
    }
    return func_0204a98c(arg0);
}
