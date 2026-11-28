/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0200e684();                               /* extern */
extern s32 data_0215ad30;

s32 func_02006720(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x280) == 0) {
        var_r1 = M2C_FIELD(arg0, s32 *, 0x374);
    } else {
        var_r1 = *func_0200e684();
    }
    if ((var_r1 > (s32) data_0215ad30) ||
        (((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B4), u8 *, 0x24) << 0x1F) >> 0x1F) != 0)) {
        return 1;
    }
    return 0;
}
