#include "m2c.h"

M2C_UNK func_02088534();  /* extern */
extern M2C_UNK data_020e68c1;

void func_020bffe8(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    M2C_FIELD(arg0, s32 *, 0xCF8) = arg1;
    func_02088534(arg0 + 0xC18, &data_020e68c1);
    func_02088534(arg0 + 0xCD8, &data_020e68c1, arg3);
}
