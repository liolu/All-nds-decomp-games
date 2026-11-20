#include "m2c.h"

M2C_UNK func_02001584(u16);                         /* extern */
extern u16 data_020d0b84;

u16 func_020021f4(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_020d0b84 |= temp_r4;
    func_02001584(temp_r4);
    return temp_r4;
}
