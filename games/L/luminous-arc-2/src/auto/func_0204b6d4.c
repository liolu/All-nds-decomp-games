#include "m2c.h"

M2C_UNK func_02029a90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_020c8664();                                /* extern */
extern u8 data_02158048;

void func_0204b6d4(void) {
    func_0206c4b4(3, 0x15, 0, 0x7F, 0x20, 0x100);
    func_0204a5f0();
    if (func_020c8664() != 0) {
        func_02029a90(3, 1, 0);
    } else {
        func_02029a90(3, 1, 2);
    }
    data_02158048 += 1;
}
