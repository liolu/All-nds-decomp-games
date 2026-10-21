#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02083c80(M2C_UNK *);                   /* extern */
M2C_UNK func_02083c98(M2C_UNK);                     /* extern */
extern M2C_UNK data_0217296c;

void func_020a4004(void *arg0) {
    func_020075b0(&data_0217296c, 0, 0x64);
    func_02083c80(&data_0217296c);
    func_02083c98(2);
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
