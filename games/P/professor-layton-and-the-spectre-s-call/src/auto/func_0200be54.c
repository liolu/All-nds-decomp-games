#include "m2c.h"

s32 func_0200ce30();                                /* extern */
extern M2C_UNK data_020347c8;

void func_0200be54(void) {
    M2C_FIELD(&data_020347c8, s32 *, 0x18) = func_0200ce30();
}
