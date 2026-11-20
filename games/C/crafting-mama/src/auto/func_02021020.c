#include "m2c.h"

M2C_UNK func_02021038();                            /* extern */
extern M2C_UNK data_020960a0;

void func_02021020(s32 arg0) {
    M2C_FIELD(&data_020960a0, s32 *, 0x14) = arg0;
    func_02021038();
}
