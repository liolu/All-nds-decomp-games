#include "m2c.h"

s32 func_020636f4();                                /* extern */
s32 func_02063c64(M2C_UNK);                         /* extern */
s32 func_02063d48(M2C_UNK);                         /* extern */
M2C_UNK func_02063df0(M2C_UNK, s32);                /* extern */
M2C_UNK func_02063e04(M2C_UNK, s32);                /* extern */
M2C_UNK func_0206422c(s32);                         /* extern */
M2C_UNK func_02064234(s32);                         /* extern */
extern M2C_UNK data_0208e844;

void func_02063bd0(void) {
    func_02063df0(2, func_02063c64(2));
    func_02063e04(2, func_02063d48(2));
    if ((M2C_FIELD(&data_0208e844, s32 *, 4) != 0) && ((func_020636f4() & 3) != 1)) {
        return;
    }
    func_0206422c(0x0200002B);
    func_02064234(0x023E0021);
}
