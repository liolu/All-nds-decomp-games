/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_020129a8(M2C_UNK *);                       /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d3378();                                /* extern */
extern M2C_UNK data_02185160;
extern M2C_UNK data_021851a0;

s32 func_020d3320(void) {
    if (M2C_FIELD(&data_02185160, s32 *, 0x14) != 6) {
        return 0;
    }
    func_020d2084(3);
    if (func_020129a8(&data_021851a0) != 0) {
        func_020d2104();
        return 0;
    }
    if (func_020d3378() == 0) {
        return 0;
    }
    return 1;
}
