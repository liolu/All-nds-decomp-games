#include "engine.h"
#include "m2c.h"

void func_020104b4(void);

extern M2C_UNK data_0203482c;

void func_02010488(void) {
    M2C_FIELD(&data_0203482c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0203482c, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0203482c, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_0203482c, s32 *, 0x14) = 0;
    func_020104b4();
}
