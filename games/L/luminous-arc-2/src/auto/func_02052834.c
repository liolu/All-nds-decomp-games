#include "m2c.h"

M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_020a51c4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02158048;
extern M2C_UNK data_0218383c;

void func_02052834(void) {
    func_020a51c4(&data_0218383c);
    M2C_FIELD(&data_02158048, s8 *, 1) = 6;
    func_02056b10(1);
}
