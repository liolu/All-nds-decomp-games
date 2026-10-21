/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0200a714(s32);                         /* extern */
s32 func_0200a9f4(s32, s32);                        /* extern */
M2C_UNK func_0206cf80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

s32 func_02071c60(void *arg0) {
    func_0200a714(arg0 + 0xEC);
    if (func_0200a9f4(arg0 + 0xEC, arg0 + 0x134) != 0) {
        M2C_FIELD(arg0, s8 *, 4) = 1;
        return 0;
    }
    func_0206cf80(-0xB3, 0, 0);
    return -0xB3;
}
