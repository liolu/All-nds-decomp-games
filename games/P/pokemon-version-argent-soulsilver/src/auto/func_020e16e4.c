#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020d66a0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020e0fb8();                            /* extern */
M2C_UNK func_020e1678(M2C_UNK);                     /* extern */
M2C_UNK func_020e1798();                            /* extern */
M2C_UNK func_020e34c0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021e4d80;
extern M2C_UNK data_021e4e60;
extern M2C_UNK func_020e198c;
extern M2C_UNK func_020e19b8;
extern M2C_UNK func_020e1a28;

void func_020e16e4(void) {
    if (M2C_FIELD(&data_021e4d80, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_021e4d80, s32 *, 8) = 1;
    func_020e0fb8();
    M2C_FIELD(&data_021e4d80, s32 *, 0xC) = 0;
    func_020d6548();
    do {

    } while (func_020d66a0(0xD, 1) == 0);
    func_020d6654(0xD, &func_020e198c);
    func_020e1798();
    func_020d6654(0xD, NULL);
    func_020d6654(0xD, &func_020e19b8);
    M2C_FIELD(&data_021e4d80, s32 *, 0x18) = 0;
    func_020e34c0(&data_021e4e60);
    func_020d6654(0x11, &func_020e1a28);
    func_020e1678(0);
}
