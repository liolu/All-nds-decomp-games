#include "m2c.h"

M2C_UNK func_020c7028();                            /* extern */
extern M2C_UNK data_02103048;

void func_020c382c(void) {
    func_020c7028();
    M2C_FIELD(&data_02103048, u8 *, 0x8D) = (u8) (M2C_FIELD(&data_02103048, u8 *, 0x8D) + 1);
}
