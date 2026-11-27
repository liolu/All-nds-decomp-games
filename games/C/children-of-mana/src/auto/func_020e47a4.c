/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020615a0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_02061fc0(M2C_UNK *, s32, u16, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern s32 data_0212e948;
extern void *data_0212e958;
extern s32 data_0212e968;
extern s32 data_0212e96c;
extern s32 data_0212e970;
extern s32 data_0212e98c;
extern M2C_UNK func_020e4b40;
extern M2C_UNK func_020e4cf0;

s32 func_020e47a4(void) {
    u16 var_r0;

    if ((data_0212e948 == 0) && (func_020615a0(4, &func_020e4b40, 0) != 0)) {
        return 0;
    }
    if (M2C_FIELD(data_0212e958, u16 *, 0x16) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (func_02061fc0(&func_020e4cf0, data_0212e970, (u16) data_0212e968, data_0212e96c, (s32) (u16) data_0212e98c,
                      (s32) var_r0, 0, 0, 0, 0, 0) != 2) {
        return 0;
    }
    return 1;
}
