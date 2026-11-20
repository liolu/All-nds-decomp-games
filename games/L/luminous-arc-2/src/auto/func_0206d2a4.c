#include "m2c.h"

M2C_UNK func_0206d2c8();                            /* extern */
extern M2C_UNK data_0216e3dc;

s32 func_0206d2a4(void) {
    M2C_FIELD(&data_0216e3dc, s16 *, 0xD4) = 0;
    M2C_FIELD(&data_0216e3dc, s16 *, 0xD6) = 0;
    func_0206d2c8();
    return 0;
}
