/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020573d8();                                /* extern */
M2C_UNK func_02057b10(M2C_UNK);                     /* extern */
s32 func_0205851c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02058544(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_0205b164;

void func_0205b0f8(void) {
    func_02058544(7, &func_0205b164);
    if (func_020573d8() != 0) {
        return;
    }
    if (func_0205851c(7, 1) != 0) {
        return;
    }
    do {
        func_02057b10(0x64);
    } while (func_0205851c(7, 1) == 0);
}
