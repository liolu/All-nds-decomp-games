#include "m2c.h"

s32 func_02012060(M2C_UNK *);                       /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
s32 func_020d3438();                                /* extern */
extern M2C_UNK data_02185160;
extern M2C_UNK data_02185bc0;

void func_020d3d70(void) {
    if ((M2C_FIELD(&data_02185160, s32 *, 0x14) == 5) && (func_02012060(&data_02185bc0) != 0)) {
        func_020d2104();
    }
    if (func_020d3438() != 0) {
        return;
    }
    func_020d2084(0xA);
}
