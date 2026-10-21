#include "m2c.h"

s32 func_02008e2c(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02091c48(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_02092278;

s32 func_0209220c(void) {
    do {

    } while (func_02008e2c(4, 1) == 0);
    func_02008de0(4, &func_02092278);
loop_3:
    if (func_02091c48(7, 0, 0, 0) != 1) {
        WaitByLoop(0x40000);
        goto loop_3;
    }
    return 1;
}
