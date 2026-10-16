#include "m2c.h"

M2C_UNK func_020b6c40(M2C_UNK);                     /* extern */
s32 func_020b8690();                                /* extern */
M2C_UNK func_020b8e58(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020b8ea4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_020b859c;

void func_020b85c0(void) {
    func_020b8e58(7, &func_020b859c);
    if (func_020b8690() == 0) {
        return;
    }
    if (func_020b8ea4(7, 1) != 0) {
        return;
    }
    do {
        func_020b6c40(0x64);
    } while (func_020b8ea4(7, 1) == 0);
}
