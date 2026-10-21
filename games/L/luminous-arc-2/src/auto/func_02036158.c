#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_02182a4c;
extern M2C_UNK data_0218327a;

void func_02036158(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(&data_02175a4c, s8 *, 0x18B) = 0;
    func_020075b0(&data_0218327a, 0, 8);
    M2C_FIELD(&data_02182a4c, s8 *, 0x82E) = arg0;
    M2C_FIELD(&data_02182a4c, s8 *, 0x82F) = arg1;
    M2C_FIELD(&data_02182a4c, s8 *, 0x830) = arg2;
    M2C_FIELD(&data_02182a4c, s8 *, 0x831) = arg3;
}
