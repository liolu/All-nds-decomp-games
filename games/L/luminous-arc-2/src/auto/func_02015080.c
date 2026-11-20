#include "engine.h"
#include "m2c.h"

void func_020150ac(void);

extern M2C_UNK data_0214ade0;

void func_02015080(void) {
    M2C_FIELD(&data_0214ade0, s32 *, 0x18) = 0;
    M2C_FIELD(&data_0214ade0, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0214ade0, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_0214ade0, s32 *, 0x14) = 0;
    func_020150ac();
}
