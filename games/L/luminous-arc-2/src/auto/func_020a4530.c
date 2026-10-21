#include "m2c.h"

s32 func_02059014();                                /* extern */
M2C_UNK func_02088688();                            /* extern */
s32 func_020886a8();                                /* extern */
extern M2C_UNK data_0217296c;
extern M2C_UNK data_0217396c;

void func_020a4530(void) {
    s32 temp_r2;

    if ((func_02059014() == 2) && (func_020886a8() != 0)) {
        M2C_FIELD(&data_0217396c, s8 *, 0xA8) = 1;
        func_02088688();
    }
    temp_r2                                 = M2C_FIELD(&data_0217296c, s32 *, 0xE94) + 1;
    M2C_FIELD(&data_0217296c, s32 *, 0xE94) = temp_r2;
    if (temp_r2 <= 0x708) {
        return;
    }
    if (func_020886a8() == 0) {
        return;
    }
    func_02088688();
}
