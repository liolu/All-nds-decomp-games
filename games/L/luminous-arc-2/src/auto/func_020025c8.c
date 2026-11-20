#include "m2c.h"

M2C_UNK func_020018ac(u16);                         /* extern */
extern u16 data_02147824;

u16 func_020025c8(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_02147824 |= temp_r4;
    func_020018ac(temp_r4);
    return temp_r4;
}
