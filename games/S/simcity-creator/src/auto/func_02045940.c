#include "m2c.h"

s32 func_02044430();                                /* extern */
M2C_UNK func_02044cd4();                            /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */

void func_02045940(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x470) = 1;
    M2C_FIELD(arg0, s32 *, 0x468) = 4;
    if (func_02044430() == 1) {
        func_02044cd4();
        return;
    }
    if (func_02044430() != 0) {
        return;
    }
    func_02044ddc(arg0, 0xF);
}
