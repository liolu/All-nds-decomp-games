/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0200e9cc();                               /* extern */
extern s32 data_021581b0;

s32 func_02006a60(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x280) == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x374);
    } else {
        var_r1 = *func_0200e9cc();
    }
    if ((var_r1 > (s32) data_021581b0) ||
        (((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), u8 *, 0x24) << 0x1F) >> 0x1F) != 0)) {
        return 1;
    }
    return 0;
}
