#include "m2c.h"

s32 func_020cab60();                                /* extern */
M2C_UNK func_020d4b24(u8);                          /* extern */
extern M2C_UNK data_02152824;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_020d4728(void) {
    func_020d4b24(M2C_FIELD(&data_0216be68, u8 *, 0x29));
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_02152824, s8 *, 0x41E) = 0;
    M2C_FIELD(&data_02152824, s8 *, 0x41F) = 0;
    M2C_FIELD(&data_02152824, s8 *, 0x420) = 0;
    M2C_FIELD(&data_02152824, s8 *, 0x421) = 0;
    M2C_FIELD(&data_02152824, s8 *, 0x417) = 0;
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) + 1);
}
