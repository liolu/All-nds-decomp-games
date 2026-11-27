#include "m2c.h"

M2C_UNK func_020b445c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020b462c(M2C_UNK);                     /* extern */
M2C_UNK func_020b6bbc(M2C_UNK, u16);                /* extern */
extern M2C_UNK func_01ffb73c;

void func_02092f14(void) {
    u16 temp_r1;

    func_020b445c(1, &func_01ffb73c);
    func_020b462c(1);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    func_020b6bbc(1, temp_r1);
    *(s16 *) 0x04000004 = 8;
}
