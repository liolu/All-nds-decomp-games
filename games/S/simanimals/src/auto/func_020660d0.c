#include "m2c.h"

M2C_UNK func_02064aac(M2C_UNK);                     /* extern */
s32 func_020661a0();                                /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_020660ac;

void func_020660d0(void) {
    func_020668f0(7, &func_020660ac);
    if (func_020661a0() == 0) {
        return;
    }
    if (func_0206693c(7, 1) != 0) {
        return;
    }
    do {
        func_02064aac(0x64);
    } while (func_0206693c(7, 1) == 0);
}
