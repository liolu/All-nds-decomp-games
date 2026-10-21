#include "m2c.h"

M2C_UNK func_020bee18();                            /* extern */
extern M2C_UNK data_021704fc;

void func_02088660(void) {
    if (M2C_FIELD(&data_021704fc, s32 *, 0x10) != 0) {
        M2C_FIELD(&data_021704fc, s32 *, 0xC) = 1;
        return;
    }
    func_020bee18();
}
