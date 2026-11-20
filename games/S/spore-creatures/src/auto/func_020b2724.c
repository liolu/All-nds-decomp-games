#include "m2c.h"

M2C_UNK func_020b1a08(u16);                         /* extern */
extern u16 data_020f1894;

u16 func_020b2724(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_020f1894 |= temp_r4;
    func_020b1a08(temp_r4);
    return temp_r4;
}
