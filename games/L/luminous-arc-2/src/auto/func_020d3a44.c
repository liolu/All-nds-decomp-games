#include "m2c.h"

s32 func_020108c0(s32);                             /* extern */
M2C_UNK func_020d2084(M2C_UNK);                     /* extern */
M2C_UNK func_020d2104();                            /* extern */
extern M2C_UNK data_02185160;

void func_020d3a44(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020d2104();
        func_020d2084(0xA);
        return;
    }
    if (func_020108c0(M2C_FIELD(&data_02185160, s32 *, 0x20)) != 0) {
        func_020d2104();
        func_020d2084(0xA);
        return;
    }
    func_020d2084(1);
}
