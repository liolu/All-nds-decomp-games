#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02181a4c;
extern M2C_UNK data_02181ccc;

void func_02034a5c(s32 arg0, s32 arg1) {
    func_020075b0(&data_02181ccc, 0, 8);
    M2C_FIELD(&data_02181a4c, s32 *, 0x280) = arg0;
    M2C_FIELD(&data_02181a4c, s32 *, 0x284) = arg1;
}
