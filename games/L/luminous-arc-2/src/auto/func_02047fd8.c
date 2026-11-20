#include "m2c.h"

M2C_UNK func_02048014(M2C_UNK);                     /* extern */
M2C_UNK func_02048178();                            /* extern */
extern M2C_UNK data_0217b34c;

void func_02047fd8(void) {
    func_02048014(0);
    func_02048178();
    M2C_FIELD(&data_0217b34c, s16 *, 0x6A) = 0;
}
