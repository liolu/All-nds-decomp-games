#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205def4();                            /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020cc610(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0216bcfa;

void func_0205884c(void) {
    func_0205def4();
    func_020075b0(&data_0216bcfa, 0, 0xD);
    func_020cc3fc(0x1C, 0xD, 2);
    func_020cc610(0, 1, 1, 0, 0, 2);
    *(s16 *) 0x04001050 = 0;
}
