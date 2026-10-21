#include "m2c.h"

M2C_UNK func_02016bac(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_02094048;

void func_0201621c(s32 arg0) {
    M2C_FIELD(&data_02094048, s32 *, 4) = arg0;
    func_02016bac(arg0, 0, 0x21C);
}
