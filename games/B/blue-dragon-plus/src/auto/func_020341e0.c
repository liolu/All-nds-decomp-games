#include "m2c.h"

M2C_UNK func_02033570(u16);                         /* extern */
extern u16 data_0215da00;

u16 func_020341e0(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0215da00 |= temp_r4;
    func_02033570(temp_r4);
    return temp_r4;
}
