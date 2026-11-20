#include "m2c.h"

s32 func_02037430();                                /* extern */
s32 func_020379a0(M2C_UNK);                         /* extern */
s32 func_02037a84(M2C_UNK);                         /* extern */
M2C_UNK func_02037b2c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02037b40(M2C_UNK, s32);                /* extern */
M2C_UNK func_02038030(s32);                         /* extern */
M2C_UNK func_02038038(s32);                         /* extern */
extern M2C_UNK data_0215dd38;

void func_0203790c(void) {
    func_02037b2c(2, func_020379a0(2));
    func_02037b40(2, func_02037a84(2));
    if ((M2C_FIELD(&data_0215dd38, s32 *, 4) != 0) && ((func_02037430() & 3) != 1)) {
        return;
    }
    func_02038030(0x0200002B);
    func_02038038(0x023E0021);
}
