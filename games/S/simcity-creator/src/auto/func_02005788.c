#include "m2c.h"

s32 func_02005154();                                /* extern */
s32 func_0200581c(M2C_UNK);                         /* extern */
s32 func_02005900(M2C_UNK);                         /* extern */
M2C_UNK func_020059a8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020059bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02005ec4(s32);                         /* extern */
M2C_UNK func_02005ecc(s32);                         /* extern */
extern M2C_UNK data_020d0ebc;

void func_02005788(void) {
    func_020059a8(2, func_0200581c(2));
    func_020059bc(2, func_02005900(2));
    if ((M2C_FIELD(&data_020d0ebc, s32 *, 4) != 0) && ((func_02005154() & 3) != 1)) {
        return;
    }
    func_02005ec4(0x0200002B);
    func_02005ecc(0x023E0021);
}
