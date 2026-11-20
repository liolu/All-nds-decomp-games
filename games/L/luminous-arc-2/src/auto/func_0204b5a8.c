#include "m2c.h"

M2C_UNK func_0203eee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204a3d4();                            /* extern */
M2C_UNK func_0204a3fc();                            /* extern */
M2C_UNK func_0204d9f4(M2C_UNK);                     /* extern */
M2C_UNK func_0204da2c();                            /* extern */
s32 func_020c8664();                                /* extern */
extern u8 data_02158048;

void func_0204b5a8(void) {
    func_0204a3d4();
    func_0204da2c();
    if (func_020c8664() != 0) {
        func_0203eee4(1, 0x200);
    }
    func_0204a3fc();
    func_0204d9f4(0);
    data_02158048 += 1;
}
