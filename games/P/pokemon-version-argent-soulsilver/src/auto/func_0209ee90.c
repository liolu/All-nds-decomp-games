#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_0209e8cc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0209eefc;

s32 func_0209ee90(void) {
    do {

    } while (func_020d66a0(4, 1) == 0);
    func_020d6654(4, &func_0209eefc);
loop_3:
    if (func_0209e8cc(7, 0, 0, 0) != 1) {
        WaitByLoop(0x40000);
        goto loop_3;
    }
    return 1;
}
