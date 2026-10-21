#include "m2c.h"

extern M2C_UNK data_02152824;
extern M2C_UNK data_021800b4;

void func_0204228c(s32 arg0) {
    M2C_FIELD(&data_02152824, u8 *, 0x68) = (u8) * ((u8 *) ((s8 *) &data_021800b4 + (arg0 * 0xC0)));
}
