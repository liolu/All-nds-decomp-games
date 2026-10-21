#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_020c8664();                                /* extern */
extern u8 data_02151425;
extern M2C_UNK data_0218005c;
extern M2C_UNK data_02180a4c;
extern M2C_UNK data_02180f4c;

void func_0204e808(s16 arg0) {
    func_020075b0(&data_0218005c, 0, 0x113C);
    M2C_FIELD(&data_02180f4c, s16 *, 0x68) = arg0;
    if (func_020c8664() == 0) {
        return;
    }
    M2C_FIELD(&data_02180a4c, u8 *, 0x5B1) = (u8) data_02151425;
}
