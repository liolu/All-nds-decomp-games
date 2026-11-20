#include "m2c.h"

M2C_UNK func_0203b2bc(M2C_UNK);                     /* extern */
M2C_UNK func_0203b58c(M2C_UNK);                     /* extern */
M2C_UNK func_02041f10();                            /* extern */
M2C_UNK func_0204a5f0();                            /* extern */
extern u8 data_02158048;
extern M2C_UNK data_02180a4c;

void func_02038fdc(void) {
    func_0204a5f0();
    func_0203b2bc(9);
    func_0203b58c(1);
    M2C_FIELD(&data_02180a4c, s8 *, 0x715) = 0;
    func_02041f10();
    data_02158048 += 1;
}
