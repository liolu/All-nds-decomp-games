#include "m2c.h"

s32 func_02034310();                                /* extern */
extern M2C_UNK data_0215da1c;

void func_02035d84(void) {
    M2C_FIELD(&data_0215da1c, s32 *, 0x18) = func_02034310();
}
