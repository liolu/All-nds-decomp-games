#include "m2c.h"

extern M2C_UNK data_02180a4c;

void func_02035cc8(u8 *arg0) {
    M2C_FIELD(&data_02180a4c, u8 *, 0x57A) = (u8) (M2C_FIELD(&data_02180a4c, u8 *, 0x57A) + *arg0);
}
