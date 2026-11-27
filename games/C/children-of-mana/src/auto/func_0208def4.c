/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02001cc8(s32, M2C_UNK, s32);           /* extern */
s32 func_0200f21c(s32, M2C_UNK);                    /* extern */
s32 func_0200f978(s16);                             /* extern */
s16 func_0200f998(s32);                             /* extern */
s32 func_02089890(s32, s32);                        /* extern */

void func_0208def4(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_r5;
    void *temp_r1;

    M2C_FIELD(arg0, s16 *, 0x10) = func_0200f998(M2C_FIELD(arg0, s32 *, 0xC));
    temp_r6                      = func_0200f978(M2C_FIELD(arg0, s16 *, 0x10));
    var_r5                       = 0;
    do {
        temp_r0 = func_02089890(temp_r6, var_r5);
        temp_r1 = arg0 + (var_r5 * 4);
        var_r5 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x14) = temp_r0;
    } while (var_r5 < 2);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0200f21c(M2C_FIELD(arg0, s32 *, 0x20) * 0x14, 0);
    func_02001cc8(M2C_FIELD(arg0, s32 *, 0x1C), 0, M2C_FIELD(arg0, s32 *, 0x20) * 0x14);
}
