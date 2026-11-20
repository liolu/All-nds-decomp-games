#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02181a4c;
extern M2C_UNK data_02181cc8;

void func_0202b7a8(s8 arg0, s8 arg1) {
    func_020075b0(&data_02181cc8, 0, 2);
    M2C_FIELD(&data_02181a4c, s8 *, 0x27C) = arg0;
    M2C_FIELD(&data_02181a4c, s8 *, 0x27D) = arg1;
}
