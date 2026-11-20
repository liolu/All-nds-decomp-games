#include "m2c.h"

M2C_UNK func_02069920();                            /* extern */
extern M2C_UNK data_0209064c;

void func_02069908(s32 arg0) {
    M2C_FIELD(&data_0209064c, s32 *, 0x14) = arg0;
    func_02069920();
}
