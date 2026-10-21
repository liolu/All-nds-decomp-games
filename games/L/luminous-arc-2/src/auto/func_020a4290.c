#include "m2c.h"

s32 func_020841cc();                                /* extern */
extern M2C_UNK data_0217296c;

void func_020a4290(void *arg0) {
    if (func_020841cc() == 0) {
        return;
    }
    M2C_FIELD(&data_0217296c, s32 *, 0xE78) = 0;
    M2C_FIELD(arg0, u8 *, 0x77B)            = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
