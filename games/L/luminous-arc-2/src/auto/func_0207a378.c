#include "m2c.h"

M2C_UNK func_020d3db8();                            /* extern */

void func_0207a378(void *arg0) {
    func_020d3db8();
    M2C_FIELD(arg0, s8 *, 0x780) = 0;
    M2C_FIELD(arg0, u8 *, 0x779) = (u8) (M2C_FIELD(arg0, u8 *, 0x779) + 1);
}
