#include "m2c.h"

s32 func_02044430();                                /* extern */
M2C_UNK func_02044fe8();                            /* extern */
M2C_UNK func_020450dc();                            /* extern */

void func_02045394(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x600) = 0;
    M2C_FIELD(arg0, s32 *, 0x60C) = 0;
    M2C_FIELD(arg0, s32 *, 0x470) = 1;
    if (func_02044430() != 1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x45C) == 7) {
        func_02044fe8(arg0);
        return;
    }
    func_020450dc(arg0);
}
