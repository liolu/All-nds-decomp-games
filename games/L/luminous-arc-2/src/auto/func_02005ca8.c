#include "m2c.h"

s32 func_020055f8();                                /* extern */
s32 func_02005d3c(M2C_UNK);                         /* extern */
s32 func_02005e20(M2C_UNK);                         /* extern */
M2C_UNK func_02005ec8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02005edc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02006200(s32);                         /* extern */
M2C_UNK func_02006208(s32);                         /* extern */
extern M2C_UNK data_02147b5c;

void func_02005ca8(void) {
    func_02005ec8(2, func_02005d3c(2));
    func_02005edc(2, func_02005e20(2));
    if ((M2C_FIELD(&data_02147b5c, s32 *, 4) != 0) && ((func_020055f8() & 3) != 1)) {
        return;
    }
    func_02006200(0x0200002B);
    func_02006208(0x023E0021);
}
