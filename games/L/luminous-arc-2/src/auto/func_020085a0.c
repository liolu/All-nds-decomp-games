#include "m2c.h"

M2C_UNK func_02006c50(M2C_UNK);                     /* extern */
s32 func_02008670();                                /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0200857c;

void func_020085a0(void) {
    func_02008de0(7, &func_0200857c);
    if (func_02008670() == 0) {
        return;
    }
    if (func_02008e2c(7, 1) != 0) {
        return;
    }
    do {
        func_02006c50(0x64);
    } while (func_02008e2c(7, 1) == 0);
}
