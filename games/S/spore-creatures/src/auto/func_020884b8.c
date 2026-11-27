#include "m2c.h"

M2C_UNK func_02084ac8();                            /* extern */
M2C_UNK func_02088514();                            /* extern */
M2C_UNK func_02088554();                            /* extern */
s32 func_020886e8();                                /* extern */
s32 func_02089e10();                                /* extern */
M2C_UNK func_02089e24();                            /* extern */
extern M2C_UNK data_020e69c0;

void func_020884b8(void) {
    func_02084ac8();
    func_02088554();
    if (func_020886e8() != 0) {
        return;
    }
    func_02088554();
    if (func_02089e10() != 0) {
        func_02088554();
        func_02089e24();
        return;
    }
    if (M2C_FIELD(&data_020e69c0, s32 *, 0xB4) == 0x18) {
        return;
    }
    func_02088514();
    M2C_FIELD(&data_020e69c0, s32 *, 0xB4) = 0x18;
}
