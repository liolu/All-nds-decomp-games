#include "m2c.h"

M2C_UNK func_02061f34(M2C_UNK);                     /* extern */
M2C_UNK func_02062114(M2C_UNK, u8);                 /* extern */
M2C_UNK func_02062554();                            /* extern */
M2C_UNK func_02062768();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_02060fe0(void) {
    if (func_020cab60() != 2) {
        return;
    }
    func_02062114(0, (u8) (1 - M2C_FIELD(M2C_FIELD(&data_0216be68, void **, 0x9C), u8 *, 0xA)));
    func_02061f34(0);
    func_02062768();
    func_02062554();
    func_020caa3c(2, 0, 0x10);
    M2C_FIELD(&data_0216be68, u8 *, 0xAA) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAA) + 1);
}
