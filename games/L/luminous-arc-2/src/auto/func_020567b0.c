#include "m2c.h"

M2C_UNK func_020595c8();                            /* extern */
M2C_UNK func_02059bb0(M2C_UNK);                     /* extern */
s32 func_02078f08();                                /* extern */
M2C_UNK func_02078f34();                            /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0216bccc;

void func_020567b0(void) {
    func_02078f34();
    func_020595c8();
    func_02059bb0(0);
    M2C_FIELD(&data_0216bccc, s8 *, 0x5A) = 6;
    if (!(func_02078f08() & 1)) {
        M2C_FIELD(&data_0216bccc, s8 *, 0x5C) = 1;
    }
    M2C_FIELD(&data_02158048, s8 *, 1) = 0x4B;
}
