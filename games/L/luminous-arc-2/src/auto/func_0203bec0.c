#include "m2c.h"

M2C_UNK func_0203bac4(s16, s16);                    /* extern */
extern M2C_UNK data_0217aa4c;
extern M2C_UNK data_0217b34c;

void func_0203bec0(void) {
    u8 var_r4;

    var_r4 = 0;
    if ((M2C_FIELD(&data_0217b34c, s16 *, 0x82) == 0) && (M2C_FIELD(&data_0217b34c, s16 *, 0x84) == 0)) {

    } else if (M2C_FIELD(&data_0217b34c, s16 *, 0x7A) != M2C_FIELD(&data_0217b34c, s16 *, 0x7E)) {
        var_r4 |= 1;
    }
    if ((M2C_FIELD(&data_0217b34c, s16 *, 0x86) == 0) && (M2C_FIELD(&data_0217b34c, s16 *, 0x88) == 0)) {

    } else if (M2C_FIELD(&data_0217b34c, s16 *, 0x78) != M2C_FIELD(&data_0217b34c, s16 *, 0x7C)) {
        var_r4 |= 4;
    }
    func_0203bac4(M2C_FIELD(&data_0217b34c, s16 *, 0x78), M2C_FIELD(&data_0217b34c, s16 *, 0x7A));
    M2C_FIELD(&data_0217aa4c, u8 *, 0x98E) = var_r4;
}
