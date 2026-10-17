/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001330();                          /* extern */
s32 func_02001338();                             /* extern */
M2C_UNK func_02005a58(); /* extern */

void func_02005a0c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r4 = func_02001338(arg0 + 0x20);
    func_02005a58(M2C_FIELD(arg0, s32 *, 8), temp_r5, M2C_FIELD(arg0, s32 *, 4), temp_r5, temp_r4, func_02001330(arg0 + 0x20));
}
