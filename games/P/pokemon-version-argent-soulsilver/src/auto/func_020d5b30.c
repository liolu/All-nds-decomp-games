#include "m2c.h"

M2C_UNK func_020d3aa8(M2C_UNK);                     /* extern */
s32 func_020d5c00();                                /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_020d5b0c;

void func_020d5b30(void) {
    func_020d6654(7, &func_020d5b0c);
    if (func_020d5c00() == 0) {
        return;
    }
    if (func_020d66a0(7, 1) != 0) {
        return;
    }
    do {
        func_020d3aa8(0x64);
    } while (func_020d66a0(7, 1) == 0);
}
