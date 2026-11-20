#include "m2c.h"

M2C_UNK func_02008cd4();                                 /* extern */
s32 func_02008e2c(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
extern M2C_UNK data_0214992c;
extern M2C_UNK func_0200cfbc;

void func_0200cf24(void) {
    s32 temp_r1;

    if (M2C_FIELD(&data_0214992c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0214992c, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0214992c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0214992c, s32 *, 0x20) = 0;
    func_02008cd4();
    if (func_02008e2c(8, 1) == 0) {
        do {
            WaitByLoop(0x64);
        } while (func_02008e2c(8, 1) == 0);
    }
    func_02008de0(8, &func_0200cfbc);
    temp_r1                             = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_0214992c, s32 *, 8) = temp_r1;
    M2C_FIELD(&data_0214992c, s32 *, 4) = temp_r1;
}
