#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0217aa4c;
extern M2C_UNK data_0217b3b0;

void func_0203a594(s8 arg0) {
    func_020075b0(&data_0217b3b0, 0, 0x25C);
    M2C_FIELD(&data_0217aa4c, s8 *, 0x968) = arg0;
    M2C_FIELD(&data_0217aa4c, u8 *, 0xB70) = (u8) (M2C_FIELD(&data_0217aa4c, u8 *, 0xB70) | 2);
}
