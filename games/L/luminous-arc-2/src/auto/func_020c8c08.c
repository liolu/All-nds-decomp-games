#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_02175c56;

void func_020c8c08(s8 arg0) {
    func_020075b0(&data_02175c56, 0, 4);
    M2C_FIELD(&data_02175a4c, s8 *, 0x20A) = 0x5A;
    M2C_FIELD(&data_02175a4c, s8 *, 0x20D) = arg0;
}
