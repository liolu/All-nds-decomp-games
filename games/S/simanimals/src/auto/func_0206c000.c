#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206693c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206bce8();                            /* extern */
M2C_UNK func_0206bfb8(M2C_UNK);                     /* extern */
M2C_UNK func_0206c0b4();                            /* extern */
M2C_UNK func_0206c358(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02091000;
extern M2C_UNK data_020910e0;
extern M2C_UNK func_0206c2a8;
extern M2C_UNK func_0206c2d4;
extern M2C_UNK func_0206c344;

void func_0206c000(void) {
    if (M2C_FIELD(&data_02091000, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02091000, s32 *, 8) = 1;
    func_0206bce8();
    M2C_FIELD(&data_02091000, s32 *, 0xC) = 0;
    func_020667e4();
    do {

    } while (func_0206693c(0xD, 1) == 0);
    func_020668f0(0xD, &func_0206c2a8);
    func_0206c0b4();
    func_020668f0(0xD, NULL);
    func_020668f0(0xD, &func_0206c2d4);
    M2C_FIELD(&data_02091000, s32 *, 0x18) = 0;
    func_0206c358(&data_020910e0);
    func_020668f0(0x11, &func_0206c344);
    func_0206bfb8(0);
}
