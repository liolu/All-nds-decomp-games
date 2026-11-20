#include "m2c.h"

M2C_UNK func_02013954();                            /* extern */
extern M2C_UNK data_02093f30;

void func_02013928(void) {
    M2C_FIELD(&data_02093f30, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02093f30, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_02093f30, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_02093f30, s32 *, 0x14) = 0;
    func_02013954();
}
