#include "m2c.h"

M2C_UNK func_02088e5c(u16);                         /* extern */
extern u8 data_020a0120;
extern M2C_UNK data_020d6814;

void func_0204eee8(void) {
    func_02088e5c((u16) M2C_FIELD(&data_020d6814, s32 *, 4));
    data_020a0120 -= 1;
}
