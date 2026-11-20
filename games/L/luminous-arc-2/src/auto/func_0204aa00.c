#include "m2c.h"

M2C_UNK func_0203eee4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
s32 func_020c8664();                                /* extern */
M2C_UNK func_020c8cf8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020cab60();                                /* extern */
extern u8 data_02158048;

void func_0204aa00(void) {
    func_0204a5f0();
    if (func_020cab60() == 0) {
        return;
    }
    if (func_020c8664() != 0) {
        func_020c8cf8(1, 1);
        func_0203eee4(1, 0x200);
    }
    data_02158048 += 1;
}
