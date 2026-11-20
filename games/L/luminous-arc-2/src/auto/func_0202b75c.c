#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02181a4c;
extern M2C_UNK data_02181cb8;

void func_0202b75c(s32 arg0, s8 arg1, s8 arg2) {
    func_020075b0(&data_02181cb8, 0, 0x10);
    M2C_FIELD(&data_02181a4c, s32 *, 0x26C) = arg0;
    M2C_FIELD(&data_02181a4c, s8 *, 0x274)  = arg1;
    M2C_FIELD(&data_02181a4c, s8 *, 0x277)  = arg2;
}
