#include "m2c.h"

M2C_UNK func_0205d578(s8);                          /* extern */
extern M2C_UNK data_02172940;

void func_020a31a0(void) {
    func_0205d578(M2C_FIELD(&data_02172940, s8 *, 0x19));
    M2C_FIELD(&data_02172940, u8 *, 0x16) = (u8) (M2C_FIELD(&data_02172940, u8 *, 0x16) + 1);
}
