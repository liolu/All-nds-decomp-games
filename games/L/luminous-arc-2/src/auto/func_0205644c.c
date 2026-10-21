#include "m2c.h"

s32 func_02056ae4(M2C_UNK);                         /* extern */
M2C_UNK func_02056b10(M2C_UNK);                     /* extern */
M2C_UNK func_0205884c();                            /* extern */
extern M2C_UNK data_02158048;

void func_0205644c(void) {
    if (func_02056ae4(8) == 0) {
        return;
    }
    func_0205884c();
    M2C_FIELD(&data_02158048, s8 *, 1) = 6;
    func_02056b10(1);
}
